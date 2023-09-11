class Solution {
    bool isPalindrome(string& s, int low, int high) {
        while (low < high) {
            if (s[low] != s[high])
                return false;
            low++;
            high--;
        }
        return true;
    }

 public:
    int countSubstrings(string s) {
        int ans = 0;
        for (int low=0;low<s.size();low++)
            for (int high=low;high<s.size();high++)
                ans=ans+isPalindrome(s,low,high);
                
        return ans;
    }
};