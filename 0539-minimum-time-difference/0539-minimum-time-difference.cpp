class Solution {
public:
    int findMinDifference(vector<string>& arr) {
        vector<int>minute;
        for(int i=0;i<arr.size();i++){
            string time=arr[i];
            int totalTime=stoi(time.substr(0,2))*60+stoi(time.substr(3,2));
            minute.push_back(totalTime);
        }
        sort(minute.begin(),minute.end());
        int mini=INT_MAX;
        for(int i=0;i<minute.size()-1;i++){
            mini=min(mini, minute[i+1]-minute[i]);
        }
        int end=(minute[0]+1440)-minute[minute.size()-1];
        mini=min(mini,end);
        return mini;
    }
};