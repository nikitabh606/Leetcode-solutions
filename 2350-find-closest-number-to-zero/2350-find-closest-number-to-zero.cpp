class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        unordered_set<int> s;
        for(int it : nums){
            s.insert(it);
        }
        int mini =INT_MAX;
        for(int it:nums){
            if(abs(mini) >= abs(it))
                 mini = it;
        }
        
        if(s.count(abs(mini))){
            return abs(mini);
        }
        
        return mini;
    }
};