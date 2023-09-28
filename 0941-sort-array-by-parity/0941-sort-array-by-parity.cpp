class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size()/2;
        vector<int>earr,oarr;
        for(auto it:nums){
            if(it%2==0){
                earr.push_back(it);
            }
            else{
                oarr.push_back(it);
            }
        }
        for(int i=0;i<earr.size();i++){
            nums[i]=earr[i];
        }
        int x=0;
        for(int i=earr.size();i<nums.size();i++){
            nums[i]=oarr[x++];
        }
        return nums;

    }
};