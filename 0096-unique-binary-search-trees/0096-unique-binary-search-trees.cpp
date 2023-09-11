class Solution {
public:
    int numTrees(int n) {
        unsigned long int res = 1;
        int k=n;
        int nn=2*n;
        if (k>nn-k)  k=nn-k;
        for (int i=0;i<k;i++)
        {
            res*=(nn-i);
            res/=(i+1);
        }
        res=res/(n+1);
        return res;
    }
};