class Solution {
public:
    int compress(vector<char>& nums) {
        int n=nums.size();
        string s="";
        nums.push_back('*');
        int freq=1;
        for(int i=0;i<n;i++){
            
            char c=nums[i];
            if(nums[i+1]==c){
                freq++;
            }
            else{
                s+=c;
                if(freq>1){
                    s+=to_string(freq);
                    freq=1;
                }
            }
        }
        for(int i=0;i<s.length();i++){
            nums[i]=s[i];
        }
        return s.length();
    }
};