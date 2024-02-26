// This question is solved using two approaches 
// i. Iterative way
// ii.Recursive way

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


// class Solution {
// public:

//     int first = -1;
//     int last = -1;

//     int firstOcc(vector<int> nums, int st, int end, int target){
//         // base case
//         if(st>end){
//             return first;
//         }

//         // processing
//         int mid = st + (end-st)/2;

//         if(nums[mid] == target){
//             first = mid;
//             return firstOcc(nums, st, mid-1, target);
//         }else if(nums[mid] < target){
//             return firstOcc(nums, mid+1, end, target);
//         }else{
//             return firstOcc(nums, st, mid-1, target);
//         }
//     }

//     int lastOcc(vector<int> nums, int st, int end, int target){
//          // base case
//         if(st>end){
//             return last;
//         }

//         // processing
//         int mid = st + (end-st)/2;

//         if(nums[mid] == target){
//             last = mid;
//             return lastOcc(nums, mid+1, end, target);
//         }else if(nums[mid] < target){
//             return lastOcc(nums, mid+1, end, target);
//         }else{
//             return lastOcc(nums, st, mid-1, target);
//         }
//     }

//     vector<int> searchRange(vector<int>& nums, int target) {
//         int st = 0;
//         int end = nums.size()-1;

//         vector<int> res;

//         res.push_back(firstOcc(nums, st, end, target)); 
//         res.push_back(lastOcc(nums, st, end, target)); 
        
//         return res;
//     }
// };