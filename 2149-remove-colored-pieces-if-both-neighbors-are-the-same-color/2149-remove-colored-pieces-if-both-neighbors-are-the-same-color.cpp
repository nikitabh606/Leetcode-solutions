class Solution {
public:
    bool winnerOfGame(string colors) {
        int a=0,b=0,count=0;
        for(int i=1;i<colors.size();i++){
            if(colors[i]==colors[i-1]){
                count++;
            }else{
                if(colors[i-1]=='A'){
                  a+=max(0,count-1);
                }
                else{
                    b+=max(0,count-1);
                }
                count=0;
            }
        }
        if (colors.back()=='A') {
            a+=max(0,count-1);
        }
        else{
            b+=max(0,count-1);
        }
        return a>b;
    }
};