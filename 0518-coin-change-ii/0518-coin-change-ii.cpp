class Solution {
public:

    int fun(int i,int n,vector<int>&coins,int amount,vector<vector<int>>&dp){
        if(i>=n){
            return 0;
        }
        if(amount==0) return 1;
        if(dp[i][amount] != -1){
            return dp[i][amount];
        }
        int ans=0;
        for(int k=i;k<n;k++){
            if(coins[k]<=amount){
                ans+=fun(k,n,coins,amount-coins[k],dp);
            }
        }
        
       return dp[i][amount]=ans;
    }

    int change(int amount,vector<int>& coins) {
        vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1, -1));
        return fun(0,coins.size(),coins,amount,dp);
    }
};