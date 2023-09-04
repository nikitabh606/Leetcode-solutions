class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int>mp;
        for(auto it:jewels){
            mp[it]++;
        }
        int count=0;
        for(auto it: stones){
            if(mp.find(it)!=mp.end()) count++;
        }

        return count;
    }
};