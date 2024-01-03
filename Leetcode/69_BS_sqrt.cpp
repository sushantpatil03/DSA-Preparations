class Solution {
public:    
    long long int binarySearch(int n){
        int st = 0;
        int end = n;
        long long int mid = st+(end-st)/2;
        long long int res = 0;
        while(st<=end){
            long long int temp = mid*mid;
            if(temp == n){
                return mid;
            }else if(temp > n){
                end = mid - 1;
            }else{
                res = mid;
                st = mid +1;
            }
            mid = st + (end-st)/2;
        }
        return res;
    }
    int mySqrt(int x) {
        if(x == 0) return 0;
        if(x == 1) return 1;
        int n = binarySearch(x);
        return n;
    }
};