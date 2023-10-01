class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c= count(nums.begin(), nums.end(),0);
        auto it= remove(nums.begin(), nums.end(), 0);
        int ind= abs(nums.begin()-it);
        for(int i=ind; i<nums.size();i++) nums[i]= 0;
    }
};