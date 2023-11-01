class Solution {
public:
    static int cmp(pair<string, int>& a, pair<string, int>& b)
    {
        if ((a.second > b.second) || (a.second == b.second && a.first < b.first))
            return 1;
        return 0;
    }
    vector<string> topKFrequent(vector<string>& arr, int k) {
        map<string,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<pair<string,int>>res;
        for(auto it:mp){
                res.push_back({it.first,it.second});
        }
        sort(res.begin(),res.end(),cmp);
        vector<string>ans;
        int j=0;
        while(k--){
            ans.push_back(res[j].first);
            j++;
        }

        return ans;
    }
};