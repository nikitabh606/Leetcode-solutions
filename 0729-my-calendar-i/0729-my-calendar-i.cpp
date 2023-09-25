class MyCalendar {
public:
    map<int, int> mpp;


    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        mpp[start]++;
        mpp[end]--;
        int ans= 0;
        for(auto it: mpp){
            ans+= it.second;
            if(ans>1){
                mpp[start]--;
                mpp[end]++;
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */