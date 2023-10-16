class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans(rowIndex+1);
        long temp=1;
        ans[0]=1;
        ans[rowIndex]=1;
        int x=rowIndex,y=1;
        for(int i=1;i<rowIndex;i++){
            temp = temp*x/y;
            ans[i]=temp;
            x--;
            y++;
        }
        return ans;
    }
};