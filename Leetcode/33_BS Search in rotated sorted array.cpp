class Solution {
public:
    // Find the pivot element in the rotated array
    int getPivotElement(vector<int>& arr, int n) {
        int start = 0;
        int end = n - 1;
        int mid = start + (end - start) / 2;

        while (start < end) {
            if (arr[mid] >= arr[0]) {
                start = mid + 1;
            } else {
                end = mid;
            }

            mid = start + (end - start) / 2;
        }

        // if (start == end && arr[start] == arr[0]) {
        //     return start;
        // }
        return start;
    }

    // Perform binary search in the rotated array
    int binarySearch(vector<int>& arr, int target, int start, int end) {
        int mid = start + (end - start) / 2;

        while (start <= end) {
            if (arr[mid] == target) {
                return mid;
            } else if (target > arr[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return -1;
    }

    // Main search function
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        if (n == 0) return -1; // Handle empty array case
        int pivot = getPivotElement(arr, n);
        int result = -1;

        if (target >= arr[pivot] && target <= arr[n-1]) {
            return binarySearch(arr, target, pivot, n - 1);
        } else {
            return binarySearch(arr, target, 0, pivot - 1);
        }

        //  if (target >= arr[0]) {
        //     result = binarySearch(arr, target, 0, pivot - 1);
        // } else {
        //     result = binarySearch(arr, target, pivot, n - 1);
        // }
    }
};


// class Solution {
// public:

//     int getPivotElement(vector<int>& arr, int n, int target){
//         int st = 0;
//         int end = n - 1;
//         int mid = st + (end-st) /2;

//         while(st<end){
//             if(arr[mid] >= arr[0]){
//                 st = mid+1;
//             }else{
//                 end = mid;
//             }

//             mid = st + (end-st)/2;
//         }
//         return st;
//     }
    
//     int binarySearch(vector<int>& arr, int n, int target, int st, int end){
//         int mid = st+(end-st)/2;
//         while(st<=end){
//             if(arr[mid] == target){
//                 return mid;
//             }else if(target > arr[mid]){
//                 st = mid+1;
//             }else{
//                 end = mid-1;
//             }
//             mid = st + (end-st)/2;
//         }
//         return -1;
//     }
    
//     int search(vector<int>& arr, int target) {
//         int n = arr.size();
//         int pivot = getPivotElement(arr, n, target);
//         int res = -1;
//         if(target >= arr[0]){
//             res = binarySearch(arr, n, target, 0, pivot-1);
//         }else{
//             res = binarySearch(arr, n, target, pivot, n-1);
//         }
//         return res;
//     }
// };