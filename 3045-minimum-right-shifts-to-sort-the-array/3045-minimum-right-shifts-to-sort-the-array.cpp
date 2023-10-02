class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n=nums.size();
        int count=0,i=0;
        if(is_sorted(begin(nums),end(nums))){
                return 0;
        }
        while(i<n){
            int temp=nums[n-1];
            nums.pop_back();
            nums.insert(nums.begin(),temp);
            count++;
            if(is_sorted(nums.begin(),nums.end())){
                return count;
            }
            i++;
        }
        return -1;
    }
};