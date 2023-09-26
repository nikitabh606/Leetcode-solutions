class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.size()!=t.size()) return false;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // for(int i=0;i<s.size();i++){
        //     if(s[i]!=t[i])
        //         return false;
        // }
        // return true;
        int n= s.length(), m= t.length();
        if(!(n==m)) return false;

        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // for(int i= 0; i<n; i++){
        //     if(s[i]!=t[i]){
        //         return false;
        //     }
        // }
        // return true;
        map<int, int > mpp1, mpp2;
        for(auto it: s) mpp1[it]++;
        for(auto it: t) mpp2[it]++;
        if(mpp1==mpp2) return true;
        return false;
    }
};