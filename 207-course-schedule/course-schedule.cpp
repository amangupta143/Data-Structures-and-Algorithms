class Solution {
public:
    bool dfs(int course, set<int> &visited, unordered_map<int, vector<int>> &preMap) {
        if(visited.find(course) != visited.end()) return false;
        if(preMap[course].empty()) return true;

        visited.insert(course);
        int size = preMap[course].size();
        for(int i=0; i<size; i++) {
            if(!dfs(preMap[course][i], visited, preMap)) return false;
        }
        visited.erase(course);
        preMap[course] = {};
        return true;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int size = prerequisites.size();
        if(size == 0) return true;
        unordered_map<int, vector<int>> preMap;
        for(int i=0; i<size; i++) {
            preMap[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        
        set<int> visited;
        for(int course = 0; course < numCourses; course++) {
            if(!dfs(course, visited, preMap)) return false;
        }
        return true;
    }
};