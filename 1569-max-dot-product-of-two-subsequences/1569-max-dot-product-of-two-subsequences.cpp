class Solution {
public:
    
    int sol(vector<int> &a1,vector<int> &a2,int n,int m,int i,int j,vector<vector<int>> &dp) {
        if(i == n || j == m) return 0;



        if(dp[i][j] != -1) return dp[i][j];
        int res = 0;
        if((a1[i]>0 && a2[j]>0) || (a1[i]<0 && a2[j]<0)) {
            res=max({a1[i]*a2[j]+sol(a1,a2,n,m,i+1,j+1,dp),sol(a1,a2,n,m,i,j+1,dp),sol(a1,a2,n,m,i+1,j,dp)});
        }
        else res = max(sol(a1,a2,n,m,i+1,j,dp), sol(a1,a2,n,m,i,j+1,dp));
        return dp[i][j]= res;
    }


    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size();
        int m= nums2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        int res = sol(nums1,nums2,n,m,0,0,dp);
        // cout << res << endl;
        if(res == 0) {
            sort(nums1.begin(),nums1.end());
            sort(nums2.begin(),nums2.end());
            res= max(nums1[0]*nums2[m-1],nums2[0]*nums1[n-1]);
        }
        return res;
    }
};