class Solution {
public:
    string predictPartyVictory(string senate) {
        int n=senate.length();
        queue<int>r,d;
        for(int i=0;i<n;i++){
            senate[i]=='R'? r.push(i):d.push(i);
        }
       int bhajpa,congress;
       while(!r.empty() && !d.empty()){
           bhajpa=r.front();
           congress=d.front();
           r.pop();
           d.pop();
           if(bhajpa<congress) r.push(bhajpa+n);
           else d.push(congress+n);
       }
       if(r.size()>d.size()) return "Radiant";
       else return "Dire";
    }
};