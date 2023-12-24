class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum = 0;
        int left_sum = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            total_sum += nums[i];
        }

        for(int i=0; i<n; i++){
            if(total_sum - left_sum - nums[i] == left_sum){
                return i;
            }else{
                left_sum += nums[i];
            }
        }

        return -1;

    }
};