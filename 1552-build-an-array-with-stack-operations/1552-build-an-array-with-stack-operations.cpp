class Solution {
public:
    vector<string> buildArray(vector<int>& arr, int n) {
        vector<string>v;
        int no=1;
        for(int i=0;i<arr.size();i++){
            while(no!=arr[i]){
                v.push_back("Push");
                v.push_back("Pop");
                no++;
            }
            if(no==arr[i]){
                v.push_back("Push");
                no++;
            }
        }
        for(auto it:v){
            cout<<it<<"\n";
        }
        return v;
    }
};