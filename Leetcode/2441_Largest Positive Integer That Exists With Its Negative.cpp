// Ezy Logic

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int max = -1;
        for(int x: nums){
            if(abs(x) > max){
                if(find(nums.begin(), nums.end(), -x) != nums.end())
                    max = abs(x);
            }
        }
        return max;
    }
};