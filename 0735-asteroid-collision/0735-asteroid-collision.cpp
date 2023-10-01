class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        // vector<int>v;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i]>0 || st.empty()){
                st.push(asteroids[i]);
            }
            else{
                while(true){
                    int x = st.top();
                    if(x==-asteroids[i]){
                        st.pop();
                        break;
                    }
                    else if(x<0){
                        st.push(asteroids[i]);
                        break;
                    }
                    else if(x>-asteroids[i]){
                        break;
                    }
                    else{
                        st.pop();
                        if(st.empty()){
                            st.push(asteroids[i]);
                            break;
                        }
                    }
                }
            }
        }
        vector<int>v(st.size(),0);
        for(int i=st.size()-1;i>=0;i--){
            v[i] = st.top();
            st.pop();
        }
        return v;
    }
};