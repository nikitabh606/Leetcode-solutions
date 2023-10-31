class Solution {
public:


//---------------------------------------------------------------------------------------------------------
/////////////////////////////////////Mine Gives TLE/////////////////////////////////////////////////////////////
//---------------------------------------------------------------------------------------------------------

// int count=0;
//     void fun(int i,int n,vector<int>&coins,int amount,vector<int>&ds,vector<vector<int>>&ans){
//         if(i==n){
//             if(amount==0){
//                 ans.push_back(ds);
//             }
//             return;
//         }
//         if(coins[i]<=amount){
//             ds.push_back(coins[i]);
//             fun(i,n,coins,amount-coins[i],ds,ans);
//             ds.pop_back();
//         }
//         fun(i+1,n,coins,amount,ds,ans);
        
//    }
//     int coinChange(vector<int>& coins, int amount) {
//         if(amount==0) return 0;
//         vector<int>ds;
//         vector<vector<int>>ans;
//         fun(0,coins.size(),coins,amount,ds,ans);
//         int mini=INT_MAX;
//         for(auto it:ans){
//             int x=it.size();
//             mini=min(mini,x);
//         }
//         if(mini==INT_MAX) return -1;
//         return mini;

//     }
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//----------------------------------------------------------------------------------------------------------
//////////////////////////////////////Best Approach/////////////////////////////////////////////////////////
//----------------------------------------------------------------------------------------------------------
    int fun(int i,int n,vector<int> &coins,int amount,vector<vector<int>>&dp) {
        if(i==n){
            if(amount==0) return 0;
            return INT_MAX-1;
        }
        if(dp[i][amount] != -1){
            return dp[i][amount];
        }
        int ans=-1;
        int pick=0,notpick=0;
        if(coins[i]<=amount){
            pick=1+fun(i,n,coins,amount-coins[i],dp);
            notpick=fun(i+1,n,coins,amount,dp);
            ans=min(pick,notpick);
        }
        else{
            notpick=fun(i+1,n,coins,amount,dp);
            ans=notpick;
        }

        return dp[i][amount]=ans;

    }
    
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1, -1));
        int ans = fun(0,coins.size(),coins,amount,dp);
        if(ans==INT_MAX-1) return -1;
        return ans;
    }
};