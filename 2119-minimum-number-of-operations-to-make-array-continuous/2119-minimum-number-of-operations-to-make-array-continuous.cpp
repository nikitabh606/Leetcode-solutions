class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());

        int res=1e8;
        for(int i=0;i<nums.size();i++){
            int s=nums[i];
            int e=s+n-1;
            auto it=upper_bound(nums.begin(),nums.end(),e)-nums.begin();
            res=min(res,n-(int)(it-i));
        }
        return res;
    }
};