class Solution {
public:

    vector<int> topologicalOrder(int k, vector<vector<int>>& gr){
        vector<int> indeg(k+1, 0);
        for(int node=1; node<=k; node++){
            for(auto child : gr[node]){
                indeg[child]++;
            }
        }

        queue<int> q;
        vector<int> vis(k+1, 0);
        for(int node=1; node<=k; node++){
            if(indeg[node]==0){
                q.push(node);
            }
        }

        vector<int> topoSort;
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                int node = q.front();
                q.pop();

                vis[node] = true;
                topoSort.push_back(node);

                for(auto child : gr[node]){
                    if(!vis[child]){
                        indeg[child]--;
                        if(indeg[child]==0) q.push(child);
                    }
                }
            }
        }

        vector<int> notTopo;
        for(int node=1; node<=k; node++) if(indeg[node] != 0) return notTopo;
        return topoSort;
    }

    vector<vector<int>> buildGraph(int k, vector<vector<int>>& conditions){
        vector<vector<int>> gr(k+1);

        for(auto& condition : conditions){
            int u = condition[0], v = condition[1];
            gr[u].push_back(v);
        }

        return gr;
    }

    void fillTopoArray(int k, vector<int>& rowTopo){
        unordered_map<int, bool> vis;
        for(auto el : rowTopo) vis[el] = true;

        for(int el=1; el<=k; el++){
            if(!vis[el]) rowTopo.push_back(el);
        }
    }

    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        vector<vector<int>> rowGr = buildGraph(k, rowConditions);
        vector<vector<int>> colGr = buildGraph(k, colConditions);

        vector<int> rowTopo = topologicalOrder(k, rowGr);
        vector<int> colTopo = topologicalOrder(k, colGr);

        vector<vector<int>> ans;
        if(rowTopo.size()==0 || colTopo.size()==0) return ans;

        fillTopoArray(k, rowTopo);
        fillTopoArray(k, colTopo);

        unordered_map<int, int> colInd;
        for(int j=0; j<k; j++){
            colInd[colTopo[j]] = j;
        }

        ans = vector<vector<int>>(k, vector<int>(k, 0));
        for(int i=0; i<k; i++){
            ans[i][colInd[rowTopo[i]]] = rowTopo[i];
        }

        return ans;
    }
};