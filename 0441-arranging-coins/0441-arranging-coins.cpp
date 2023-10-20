class Solution {
public:
    int arrangeCoins(int n) {
        int total=0;
        for(int i=1;i<=n;i++){
            if(n>0){
                n=n-i;
                total++;
            }
        }
        return total;
    }
};