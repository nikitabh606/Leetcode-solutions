class Solution {
public:
    int maxArea(vector<int>&height) {
        int ans=0,n=height.size();
        int left=0,right=n-1;
        while(left<right){
            int area=(right-left)*min(height[left],height[right]);
            ans=max(ans,area);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return ans;
    }
};