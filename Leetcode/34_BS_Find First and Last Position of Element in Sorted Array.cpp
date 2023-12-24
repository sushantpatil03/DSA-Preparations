class Solution {
public:
    int firstOcc(vector<int>& nums, int n, int k){
        int res = -1;
        int st = 0;
        int end = n-1;
        int mid = st + (end-st)/2;

        while(st<=end){
            if(nums[mid] == k){
                res = mid;
                end = mid -1;
            }else if(k < nums[mid]){
                end = mid -1;
            }else{
                st = mid +1;
            }
            mid = st + (end-st)/2;
        }

        return res;
    }

    int lastOcc(vector<int>& nums, int n, int k){
        int res = -1;
        int st = 0;
        int end = n-1;
        int mid = st + (end-st)/2;

        while(st<=end){
            if(nums[mid] == k){
                res = mid;
                st = mid +1;
            }else if(k < nums[mid]){
                end = mid -1;
            }else{
                st = mid +1;
            }
            mid = st + (end-st)/2;
        }

        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        int f = firstOcc(nums,n,target);
        int l = lastOcc(nums,n,target);

        vector<int> vect;  
        
        vect.push_back(f);
        vect.push_back(l);

        return vect;
    }
};