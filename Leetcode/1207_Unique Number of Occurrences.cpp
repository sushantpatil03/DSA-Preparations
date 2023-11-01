// Chat gpt detailed explaination - https://chat.openai.com/share/792b47a5-1d32-4dcb-90c7-41ea7d329693

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> countMap;
        
        for (int num : arr) {
            countMap[num]++;
        }
        
        unordered_set<int> uniqueCounts;
        
        for (const auto& pair : countMap) {
            if (uniqueCounts.find(pair.second) != uniqueCounts.end()) {
                return false;
            }
            uniqueCounts.insert(pair.second);
        }
        
        return true;
    }

    
};