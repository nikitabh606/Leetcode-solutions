class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // if(s.length()!=t.length()) return false;
        stack<char>s1,s2;
        for(int i=0;i<s.length();i++){
            if(s[i]=='#' && !s1.empty()){
                s1.pop();
            }
            else if(s[i]!='#'){
                s1.push(s[i]);
            }
            
        }

        for(int i=0;i<t.length();i++){
            if(t[i]=='#' && !s2.empty()){
                s2.pop();
            }
            else if(t[i]!='#'){
                s2.push(t[i]);
            }
        }
        string str1="",str2="";
        while(!s1.empty()){
            char c=s1.top();
            s1.pop();
            str1+=c;
        }
        while(!s2.empty()){
            char c=s2.top();
            s2.pop();
            str2+=c;
        }
        return str1==str2;
    }
};