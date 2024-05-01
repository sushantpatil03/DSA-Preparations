// Not optimised logic tho!

class Solution {
public:
    string findCity(string s, unordered_map<string, string>& um){
        if(um.find(s) == um.end()){
            return s;
        }else{
            return findCity(um[s], um);
        }
    }

    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> um;

        string ans = "";

        for(vector<string> v: paths){
            um[v[0]] = v[1];
        }

        for(int i=0; i<paths.size(); i++){
            if (um.find(paths[i][0]) != um.end()) {
                ans = findCity(paths[i][0], um);
            }
        }

        return ans;
    }
};