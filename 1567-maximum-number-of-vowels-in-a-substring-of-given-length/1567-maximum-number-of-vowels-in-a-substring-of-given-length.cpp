class Solution {
public:

    bool isvowel(char c){
        if(c=='a' || c=='e' || c=='i' ||c=='o' ||c=='u'){return true;}
        else return false;
    }

    int maxVowels(string s, int k) {
        int n= s.length();
        int p=0;
        int c=0; 
        int maxi=0;
        for(int i=0 ; i<n; i++){
            if(isvowel(s[i])){
                c++;
            }
            if(i==(p+(k-1))){
                maxi= max(maxi, c);
                if(isvowel(s[p])){c--;}
                p++;
            }
        }
        return maxi;
        
    }
};