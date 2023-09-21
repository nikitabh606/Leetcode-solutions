class Solution {
public:
    
    int fun(int i,int j,int m,int n,vector<vector<int>>&grid,vector<vector<int>>&dp){
        if(i==m-1 && j==n-1) return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int down=INT_MAX;
        int right=INT_MAX;
        if(i+1<m) down=fun(i+1,j,m,n,grid,dp);
        if(j+1<n) right=fun(i,j+1,m,n,grid,dp);
        return dp[i][j]=grid[i][j]+min(right,down);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int mini=0;
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return fun(0,0,m,n,grid,dp);
    }
};