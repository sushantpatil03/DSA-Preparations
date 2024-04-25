class Solution {
public:

    int helper(int n, unordered_map<int,int>& memo){
        if(memo.find(n) != memo.end()){
            return memo[n];
        }
        int res;
        if(n==0){
            res = 0;
        }else if(n==1 || n==2){
            res = 1;
        }else{
            res = helper(n-1,memo) + helper(n-2, memo) + helper(n-3, memo);
        }
        memo[n] = res;
        return res;
    }

    int tribonacci(int n) {
        unordered_map<int, int> memo;
        return helper(n, memo);
    }
};