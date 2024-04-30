class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int res=0;
        unordered_map<string, int> um;

        for(string s: words){
            um[s]++;
        }

        for(int i=0; i<words.size(); i++){
            string s = words[i];
            if(s[0] != s[1]){
                string s2 = "";
                s2 += s.at(1);
                s2 += s.at(0);
                
                if (um.find(s2) == um.end()) {
                    ; //Key is not in the map
                }else{
                    if(um[s] >= 1 && um[s2] >=1){
                        res +=1;
                        um[s]--;
                        um[s2]--;
                    }
                }

            }
        }
        return res;
    }
};