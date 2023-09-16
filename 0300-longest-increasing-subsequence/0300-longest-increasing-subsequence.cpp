class Solution {
public:
    int dp[2501][2501];
    int n;
    int solve(vector<int>&nums,int i,int prev){
      if(i>=n) return 0;
      if(prev!=-1 && dp[i][prev]!=-1) return dp[i][prev];
      int take=0;
      if(prev==-1 || nums[i]>nums[prev]){
        take=1+solve(nums,i+1,i);
      }
      int skip=solve(nums,i+1,prev);
      if(prev!=-1){
        return dp[i][prev]=max(take,skip);
      }
      return max(take,skip);

    }
    int lengthOfLIS(vector<int>& nums) {
      n=nums.size();
      memset(dp,-1,sizeof(dp));
      return solve(nums,0,-1);
    }
};