class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int mini=INT_MAX;
        unordered_map<int,int>mp;
        for(auto it:nums){
            int x=abs(it-0);
            mp[it]=x;
            mini=min(mini,x);
        }
        for(auto it:mp){
            if(it.second==mini){
                if(mp.count(abs(mini)))return abs(it.first);
                return it.first;
            }
        }
        return -1;
    }
};