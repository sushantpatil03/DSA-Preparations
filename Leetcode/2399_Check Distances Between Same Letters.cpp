class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<char, vector<int>> um;

        for(int i=0; i<s.size(); i++){
            um[s[i]].push_back(i);
        }
        bool well = true;
        for(int i=0; i<26; i++){
            char ch = 'a'+i;
            if (um.find(ch) == um.end()) {
                ;
            }else{
                int dis = abs(um[ch][0] - um[ch][1]) -1;
                if( dis != distance[i])
                    well = false;
            }
        }

        return well;
    }
};