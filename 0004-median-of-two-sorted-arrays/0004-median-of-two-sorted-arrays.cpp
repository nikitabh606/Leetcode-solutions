class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // vector<int>v;
        // for(auto num:nums1)
        //     v.push_back(num);
        // for(auto num:nums2)
        //     v.push_back(num);
        // sort(v.begin(),v.end());
        // int n=v.size();  
        // return n%2?v[n/2]:(v[n/2-1]+v[n/2])/2.0;


        int m=nums1.size(), n=nums2.size();
        int i=0, j=0, no1=0, no2=0;
        for (int k=0; k<=(m+n)/2; k++) {
            no2=no1;
            if (i!=m && j!=n) {
                if (nums1[i] > nums2[j]) no1 = nums2[j++];
                else no1 = nums1[i++];
            }
            else if (i < m)  no1 = nums1[i++];
            else  no1 = nums2[j++];
        }
        if ((m + n) % 2 == 1) {
            return no1;
        } else {
            double ans= no1+no2;
            return ans/2.0;
        }
    }
};