class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>v;
        int n=nums.size();
        int k=n/3;
        for (const auto& pair : mp) {
            if(pair.second>k){
                v.push_back(pair.first);
            }
        }
        return v;
    }
};