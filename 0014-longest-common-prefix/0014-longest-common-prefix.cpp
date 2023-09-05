class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s,minString;
        int  minSize=INT_MAX;
        for(int i=0;i<strs.size();i++){
            s=strs[i];
            int sz=s.size();
            if(minSize>sz){
                minSize=min(minSize,sz);
                minString=strs[i];
            }
        }
        int count=0;
        int minlen=-1;
        for(int i=0;i<strs.size();i++){
            s=strs[i];
            count=0;
            for(int j=0;j<minSize;j++){
                if(s[j]==minString[j]){
                    count++;
                }
                else break;
            }
            if(minlen==-1) minlen=count;
            else{
                minlen=min(minlen,count);
            }
        }
        string ans="";
        for(int i=0;i<minlen;i++){
            ans+=minString[i];
        }
        return ans;
    }
};