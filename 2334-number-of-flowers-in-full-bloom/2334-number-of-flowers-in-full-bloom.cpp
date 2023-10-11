class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        int sz = people.size();
        vector<int> answers(sz, 0), startTime, endTime;
        for(auto &times : flowers){
            startTime.push_back(times[0]);
            endTime.push_back(times[1]);
        }
        sort(startTime.begin(), startTime.end());
        sort(endTime.begin(), endTime.end());
        for(int indx = 0; indx < sz; indx++){
           int arrivalTime = people[indx]; 
           int bloomstart=upper_bound(startTime.begin(),startTime.end(), arrivalTime) - startTime.begin();

           //index of first time value in endTime array which is having value atleast equal current arrival Time
           int bloomEndNumber = lower_bound(endTime.begin(), endTime.end(), arrivalTime) - endTime.begin();
           answers[indx] = bloomstart - bloomEndNumber;
        }
        return answers;
    }    
};