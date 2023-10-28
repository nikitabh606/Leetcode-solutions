class Solution {
public:

    void bin(vector<int> &nums, int l , int h, int t, set<int> &s){
        if(l>h) return;
        else
        {
            int mid= l+((h-l)/2);
            if(t==nums[mid])
            {
                s.insert(mid);
                bin(nums,l,mid-1,t,s);
                bin(nums,mid+1,h,t,s);
            }
            else if(t<nums[mid])
            {
                bin(nums,l,h-1,t,s);
            }
            else
            {
                bin(nums,l+1,h,t,s);
            }
        }
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        set<int>s; vector<int> v= {-1,-1};
        bin(nums,0,nums.size()-1,target,s);
        if(s.size()==1)
        {
            v[0]=v[1]= *s.begin();
        }
        else if(s.size()>1)
        {
            v[0]=*s.begin();
            v[1]=*s.rbegin();
        }
        // for(auto it: s) cout<< it<<" ";
        return v;
    }
};