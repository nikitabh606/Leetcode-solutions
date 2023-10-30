class Solution {
public:
    int trap(vector<int>& height) {
        // int sum=0,n=v.size(),x;
        // for(int i=1;i<n-1;i++)
        // {
        //     x = min( *max_element(v.begin() , v.begin()+i) , *max_element(v.begin()+i+1 , v.end())  )  -  v[i]  ;
        //     if(x<0) x=0;
        //     sum=sum + x;
        // }
        // return sum;

        int ans= 0;
        int n= height.size();
        vector<int> left(n, 0); vector<int> right(n, 0);
        left[0]= height[0]; right[n-1]= height[n-1];
        for(int i= 1; i<n; i++){
            left[i]= max(height[i], left[i-1]);
            right[n-i-1]= max(height[n-i-1], right[n-i]);
        }
        for(auto it: left) cout<<it<<" ";
        cout<<endl;
        for(auto it: right) cout<<it<<" ";
        for(int i= 0; i<n; i++){
            ans =ans+abs((min(left[i], right[i]))-height[i]);
        }
        return ans;
    }
};