class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxVal = 0;
        for(string s: strs){
            if(s == "0") {
                maxVal = std::max(maxVal, 0);
            }else{
                bool flag = true;
                for(char ch: s){
                    if(!isdigit(ch))
                        flag = false;
                }
                if(flag){
                    // int x = ;
                    maxVal = std::max(maxVal, std::stoi(s));
                }else{
                    int x = s.size();
                    maxVal = std::max(maxVal, x);
                }
            }
        }
        return maxVal;
    }
};