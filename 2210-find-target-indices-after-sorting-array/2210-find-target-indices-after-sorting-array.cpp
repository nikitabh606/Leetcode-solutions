class Solution {
public:
void bin(vector<int> &nums, int l , int h, int t, vector<int> &ans){
        if(l>h) return;
        else
        {
            int mid= l+((h-l)/2);
            if(t==nums[mid])
            {
                ans.push_back(mid);
                bin(nums,l,mid-1,t,ans);
                bin(nums,mid+1,h,t,ans);
            }
            else if(t<nums[mid])
            {
                bin(nums,l,h-1,t,ans);
            }
            else
            {
                bin(nums,l+1,h,t,ans);
            }
        }
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        bin(nums,0,nums.size()-1,target,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};