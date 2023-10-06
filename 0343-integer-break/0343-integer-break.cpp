class Solution {
public:
    int fun(vector<int> &v, int sum, int n, vector<vector<int>> &dp){
        if(sum==0 || n==0) return 1;
        if(dp[n][sum] != -1) return dp[n][sum];
        if(v[n-1]<=sum){
            int one = v[n-1] * fun(v, sum - v[n-1], n, dp);
            int two = fun(v, sum, n-1, dp);
            return dp[n][sum]= max(one,two);
        }
        return dp[n][sum]= fun(v, sum, n-1, dp);
    }
    int integerBreak(int n) {
        vector<int> v;
        for(int i=1; i<n; i++) v.push_back(i);
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
        return fun(v, n, v.size(), dp);
    }
};