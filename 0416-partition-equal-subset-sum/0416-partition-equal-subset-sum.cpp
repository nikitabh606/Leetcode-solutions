class Solution {
public:
    bool fun(int i,int n,long long k,vector<int>&arr,vector<vector<long long>>&dp){
        if(i==n)return false;
        if(k==0) return true;
        if(i==n-1) return arr[i]==k;
        if(dp[i][k]!=-1) return dp[i][k];
        bool pick=false;
        if(k>=arr[i])
            pick=fun(i+1,n,k-arr[i],arr,dp);
        bool notpick=fun(i+1,n,k,arr,dp);
        return dp[i][k]=pick||notpick;
}

    bool canPartition(vector<int>& nums) {
        long long totalSum=0;
        for(int i=0;i<nums.size();i++){
            totalSum+=nums[i];
        }
        if(totalSum%2) return false;
        int n=nums.size();
        long long target=totalSum/2;
        vector<vector<long long>> dp(n,vector<long long>(target+1, -1));
        return fun(0,n,target,nums,dp);
    }
};