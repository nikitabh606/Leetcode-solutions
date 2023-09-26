class Solution {
 public:
  string convert(string s, int n){
    string temp;
    for(int i=0; i<n; i++){
      if(isalnum(s[i])){
        temp.push_back(tolower(s[i]));
      }
    }
    return temp;
  }

  bool isPalindrome(string s) {
    // for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
    //   while (i < j && !isalnum(s[i]))
    //     i++;
    //   while (i < j && !isalnum(s[j]))  
    //     j--; 
    //   if (tolower(s[i]) != tolower(s[j]))
    //     return false;
    // }
    // return true;

    int n= s.length();
    string temp= convert(s, n);
    // cout<<temp;
    int len= temp.length();
    if(len==0) return true;
    int low= 0;
    int high= len-1;
    while(low<high){
      if(temp[low]!=temp[high]){
        return false;
      }
      low++;
      high--;
    }
    return true;;


  }
};