class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxi = 0;
        unordered_set<char> set;
        int left = 0;
        
        for (int right = 0; right < n; right++) {
            // if (set.count(s[right]) == 0) {
            //     set.insert(s[right]);
            //     maxi = max(maxi, right - left + 1);
            // } else {
            //     while (set.count(s[right])) {
            //         set.erase(s[left]);
            //         left++;
            //     }
            //     set.insert(s[right]);
            // }
            while(set.count(s[right])){
                set.erase(s[left]);
                left++;
            }
            set.insert(s[right]);
            maxi=max(maxi,right-left+1);
        }
        
        return maxi;
    }
};