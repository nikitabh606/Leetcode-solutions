class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int n=nums.size();
        // int low=1,high=n-2;
        // if(n==1) return nums[0];
        // if(nums[0]!=nums[1]) return nums[0];
        // if(nums[n-1]!=nums[n-2]) return nums[n-1];
        // while(low<=high){
        //     int mid=low+(high-low)/2;
        //     if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]) return nums[mid];
        //     if((mid%2==1 && nums[mid]==nums[mid-1])||(mid%2==0 && nums[mid]==nums[mid+1])) //left half
        //     {
        //         low=mid+1;
        //     }
        //     else high=mid-1;       //eleminate right half

        // }
        // return -1;

        int x=0;
        for(int i=0;i<nums.size();i++){
            x=x^nums[i];
        }
        return x;
    }
};