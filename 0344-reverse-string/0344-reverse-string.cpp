class Solution {
public:
    void reverseString(vector<char>& s) {
        // int x=0;
        int y=s.size();
        for(int i=0;i<y/2;i++){
            swap(s[i],s[y-i-1]);
        }
    }
};