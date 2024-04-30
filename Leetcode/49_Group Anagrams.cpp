class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> um;

        for(string s: strs){
            string word = s;
            sort(word.begin(), word.end());
            um[word].push_back(s);
        }
        vector<vector<string>> res;
        for(auto x: um){
            res.push_back(x.second);
        }
        return res;

    }
};