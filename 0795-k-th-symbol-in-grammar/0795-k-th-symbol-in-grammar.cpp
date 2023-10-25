class Solution {
public:
    int kthGrammar(int n, int k) {
        bool Same = true; 
        n = pow(2, n - 1);
        while (n != 1) {
            n /= 2;
            if (k > n) {
                k -= n;
                Same = !Same;
            }
        }
        return ((Same) ? 0 : 1) ;
    }
};