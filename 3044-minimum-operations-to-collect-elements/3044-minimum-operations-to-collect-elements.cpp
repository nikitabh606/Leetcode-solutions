class Solution {
public:
    int minOperations(vector<int>& arr, int k) {
        set<int>s;
        int n=arr.size();
        for(int i=1;i<=k;i++){
            s.insert(i);
        }
        int count=0;
        set<int>ss;
        for(int i=0;i<n;i++){
            ss.insert(arr[n-i-1]);
            count++;
            int r=0,p=0;
            for(auto it: ss){
                int t1=it;
                int t2=*next(s.begin(),r);
                if(t1==t2) p++;
                else continue;
                r++;
            }
            if(p==k) break;
        }
        return count;
    }
};