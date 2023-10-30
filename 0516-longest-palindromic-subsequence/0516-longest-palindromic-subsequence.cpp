class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size();
        int n=text2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(text2[i-1]==text1[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];

    }




    int longestPalindromeSubseq(string s) {
        string ss=s;
        int n=s.length();
        for(int i=n-1;i>=0;i--){
            s[n-i-1]=ss[i];
        }

        return longestCommonSubsequence(s,ss);
    }
};