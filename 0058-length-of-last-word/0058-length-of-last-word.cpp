class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length()==1)return 1;
        int spaceCount=0;
        int i=s.length()-1;
        while(s[i]==' '){
            spaceCount++;
            i--;
        }
        int count=0;
       int  x=s.length()-1-spaceCount;
        while(s[x]!=' '){
            count++;
            x--;
            if(x<0)break;
        }
        return count;

    }
};