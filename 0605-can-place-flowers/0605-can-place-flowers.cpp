class Solution {
public:
    bool canPlaceFlowers(vector<int>&bed, int n) {
        if(n==0)  return true;
        int sz=bed.size();
        for(int i=0;i<sz;i++) {
            if(bed[i]==0 && (i==0 || bed[i-1]==0) && (i==sz-1 || bed[i+1]==0)){
                bed[i]=1;
                n--;
                if(n==0){
                    return true;
                }
            }
        }
        return false;
    }
};