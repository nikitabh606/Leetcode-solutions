class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        //Logic likhra hu yaha pe samjh lena padh ke... isme na hame do set lene padege 
        //set 1 mei ham sare nums 1 ko store karege aur set 2 mei sare nums 2 ke
        // set 1 mei ham unhe store karege.. un elements ko jo sirf nums 1 mei hai aur nums 2 mei nhi
        // iska ulta hi ham set 2 mei store karege
        //Dekh aese karna hai....................

        vector<vector<int>>ans;
        set<int>s1 , s2;
        for(int i=0;i<nums1.size();i++)
        {
            if(count(nums2.begin(), nums2.end(), nums1[i])==0){ // Dekh agar nums1 ka i(th) element ka count 0 hai nums2 mei matlab wo hai
            // hi nhi nums 2 mei to mai uss nums1 ke element ko set1 mei store karra hu
                s1.insert(nums1[i]);
            }
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(count(nums1.begin(), nums1.end(), nums2[i])==0){ // Dekh agar nums2 ka i(th) element ka count 0 hai nums1 mei matlab wo hai
            // hi nhi nums1 mei to mai uss nums2 ke element ko set2 mei store karra hu
                s2.insert(nums2[i]);
            }   
        }
        //Kyuki set ko direct daal ni sakte ans mei to maine do vectors mei sets ko store kar diya aur unhe daal diya ans mei

        //Samjh mei aaya bache ab... Chutesh : )

        vector<int> v1(s1.begin(), s1.end());
        vector<int> v2(s2.begin(), s2.end());
        ans.push_back(v1); ans.push_back(v2);
        return ans;
    }
};