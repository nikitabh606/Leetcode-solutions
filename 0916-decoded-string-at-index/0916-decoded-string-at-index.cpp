class Solution {
public:
    string decodeAtIndex(string encodedString, int k) {
        stack<long long> clen;
        clen.push(0);

        for (int i = 0; i < encodedString.length(); ++i) {
            if (isdigit(encodedString[i])) {
                long long length = clen.top() * (encodedString[i] - '0');
                clen.push(length);
            } else {
                long long length = clen.top() + 1;
                clen.push(length);
            }
        }
        int ln = clen.size();
        while (!clen.empty()) {
            k %= clen.top();
            ln--;
            if (k == 0 && isalpha(encodedString[ln - 1])) {
                return string(1, encodedString[ln - 1]);
            }
            clen.pop();
        }

        return ""; 
    }
};