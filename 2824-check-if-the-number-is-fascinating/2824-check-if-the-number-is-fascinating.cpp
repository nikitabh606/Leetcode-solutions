class Solution {
public:
    bool isFascinating(int n) {
        map<int,int>mp;
        for (int i=1;i<=9;i++) {
            mp[i]=0;
        }
        string num=to_string(n);
        string num2=to_string(2*n);
        string num3=to_string(3*n);
        num=num+num2+num3;
        // cout<<num<<"\n";
        for(auto it: num){
            int x=it-'0';
            mp[x]++;
        }
        // for(auto it:mp){
        //     cout<<it.first<<" "<<it.second<<"\n";
        // }
        for(int i=1;i<10;i++){
            if(mp.find(i)!=mp.end()){
                if(mp[i]==0 || mp[i]>1) return false;
            }
        }
        return true;
    }
};