class Solution {
public:
    string countOfAtoms(string formula) {
        int n = formula.size(), i, j, k;
        stack<pair<string, int>> st; //element, digit

        vector<int> mulFactor(n, 1);
        int mul = 1;
        stack<int> tempSt;

        for(i=n-1; i>=0; i--){
            char ch = formula[i];
            if(ch == ')'){
                string sdigit = "";
                for(j=i+1; j<n; j++){
                    ch = formula[j];
                    if(!isdigit(ch)) break;
                    sdigit += ch;
                }
                
                if(sdigit == "") sdigit = "1";
                int digit = stoi(sdigit);
                mul = mul * digit;
                tempSt.push(digit);  
            }

            else if(ch == '('){
                int digit = tempSt.top();
                tempSt.pop();
                mul = mul / digit;
            }

            mulFactor[i] = mul;
        }

        map<string, int> mp;
        for(i=0; i<n; i++){
            char ch = formula[i];
            
            if(isupper(ch)){
                int mul = mulFactor[i];
                string element = "";
                element += ch;
                for(j=i+1; j<n; j++){
                    ch = formula[j];
                    if(!islower(ch)) break;
                    element += ch;
                }

                string sdigit = "";
                for(k=j; k<n; k++){
                    ch = formula[k];
                    if(!isdigit(ch)) break;
                    sdigit += ch;
                }

                if(sdigit == "") sdigit = "1";
                int digit = stoi(sdigit);

                mp[element] += mul * digit;
                i = k-1;
            }

            else if(ch == '('){
                continue;
            }

            else if(ch == ')'){
                continue;
            }
        }

        string ans = "";
        for(auto p : mp){
            string element = p.first;
            string sdigit = to_string(p.second);
            if(sdigit == "1") sdigit = "";

            ans += element + sdigit;
        }
        
        return ans;
    }
};