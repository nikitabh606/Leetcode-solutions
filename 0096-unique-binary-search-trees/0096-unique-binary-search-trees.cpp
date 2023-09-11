class Solution {
public:
vector<int> memo;

int numUniqueBSTs(int n) {
    if (n <= 1) {
        return 1;
    }

    if (memo[n] != -1) {
        return memo[n];
    }

    int count = 0;
    for (int i = 1; i <= n; ++i) {
        count += numUniqueBSTs(i - 1) * numUniqueBSTs(n - i);
    }

    memo[n] = count;
    return count;
}

    
    int numTrees(int n) {
        // unsigned long int res = 1;
        // int nn=2*n;
        // // if (k>nn-k)  k=nn-k;
        // for (int i=0;i<n;i++)
        // {
        //     res*=(nn-i);
        //     res/=(i+1);
        // }
        // res=res/(n+1);
        // return res;

        memo.assign(n + 1, -1);
        return numUniqueBSTs(n);

    }
};