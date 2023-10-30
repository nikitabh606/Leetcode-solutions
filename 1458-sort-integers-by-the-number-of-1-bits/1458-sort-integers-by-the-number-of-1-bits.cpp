class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int, int>> p(arr.size());
        for(int i=0;i<arr.size();i++){
            p[i].second=arr[i];
            p[i].first=__builtin_popcount(arr[i]);
        }
        sort(p.begin(),p.end());
        for(int i=0;i<arr.size();i++){
            arr[i]=p[i].second;
        }
        return arr;
    }
};