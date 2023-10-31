class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals) {
    int n = intervals.size(); // size of the array

    //sort the given intervals:
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) { // select an interval:
        int start = intervals[i][0];
        int end = intervals[i][1];

        //Skip all the merged intervals:
        if (!ans.empty() && end <= ans.back()[1]) {
            continue;
        }

        //check the rest of the intervals:
        for (int j = i + 1; j < n; j++) {
            if (intervals[j][0] <= end) {
                end = max(end, intervals[j][1]);
            }
            else {
                break;
            }
        }
        ans.push_back({start, end});
    }
    return ans;
}


    // vector<vector<int>> merge(vector<vector<int>>& intervals) {
    //     sort(intervals.begin(),intervals.end());
    //     vector<vector<int>>arr;
    //     for(auto it:intervals){
    //         if(arr.empty() || arr.back()[1] < it[0])
    //             arr.push_back(it);
    //         else 
    //             arr.back()[1]=max(arr.back()[1],it[1]); 
    //     }

    //     return arr;
    // }
};