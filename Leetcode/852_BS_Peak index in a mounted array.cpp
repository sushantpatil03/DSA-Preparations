// This question is solved using two approaches 
// i. Iterative way
// ii.Recursive way

// Iterative way
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();

        int st =0;
        int end = n-1;
        int mid = st + (end-st)/2;

        while(st<=end){
            if(arr[mid] < arr[mid+1]){
                st = mid + 1;
            }else{
                if(arr[mid-1] < arr[mid]){
                    return mid;
                }else{
                    end = mid -1;
                }
            }
            mid = st + (end - st)/2;
        }

        return -1;

        // More simpler logic - 
        // while(st<=end){
        //     if(arr[mid] < arr[mid-1]){
        //         end = mid;
        //     }else if(arr[mid] < arr[mid+1]){
        //         st = mid;
        //     }else{
        //         return mid;
        //     }
        //     mid = st + (end-st)/2;
        // }
        // return mid;

    }
};


// Recursive way 
// class Solution {
// public:

//     int binarySearch(vector<int>& arr, int st, int end){
//         int mid = st + (end-st)/2;

//         if(arr[mid] < arr[mid-1]){
//             end = mid;
//         }else if(arr[mid] < arr[mid+1]){
//             st = mid;
//         }else{
//             return mid;
//         }        
//         return binarySearch(arr, st, end);
//     }

//     int peakIndexInMountainArray(vector<int>& arr) {
//         int st = 0;
//         int end = arr.size()-1;

//         // int mid = st + (end-st)/2;

//         // while(st<=end){
//         //     if(arr[mid] < arr[mid-1]){
//         //         end = mid;
//         //     }else if(arr[mid] < arr[mid+1]){
//         //         st = mid;
//         //     }else{
//         //         return mid;
//         //     }
//         //     mid = st + (end-st)/2;
//         // }
//         // return mid;

//         return binarySearch(arr,st,end);
//     }
// };