class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tot_fuel = 0, tot_cost=0;

        for(int i = 0; i < gas.size(); i++) {
            tot_fuel += gas[i];
        }  
        for(int i = 0; i < gas.size(); i++) {
            tot_cost += cost[i];
        }

        if(tot_fuel < tot_cost) {
            return -1;
        }

        int curr = 0, start = 0;
        for(int i = 0; i < gas.size(); i++){
            curr += gas[i] - cost[i];
            if(curr < 0){
                start = i + 1;
                curr = 0;
            }
        }

        return start;
    }
};