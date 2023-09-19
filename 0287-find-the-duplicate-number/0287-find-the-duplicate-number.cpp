class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) ans=nums[i];
        }
        return ans;
//-----------------------------------------------------------------//

        // map<int,int>mp;
        // for(auto it: nums){
        //     mp[it]++;
        // }
        // for(auto it: mp){
        //     if(it.second>1) ans=it.first;
        // }
        // return ans;
    }
};