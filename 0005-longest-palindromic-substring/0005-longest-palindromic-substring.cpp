class Solution {
public:
    
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
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0;
        int maxi = 0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(isPalindrome(s, i, j)){
                    if(j-i+1 > maxi){
                        maxi = j-i+1;
                        start = i;
                    }
                }
            }
        }
        return s.substr(start, maxi);
    }
};