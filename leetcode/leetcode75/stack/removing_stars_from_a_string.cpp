#include <bits/stdc++.h>

class Solution {
public:
    std::string removeStars(std::string s) {

        std::stack<char> st;
        for(char ch : s){
            if(ch != '*'){
                st.push(ch);
            } else {
                if(!st.empty()){
                    st.pop();
                }
            }
        }

        std::string res;
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        std::reverse(res.begin(), res.end());
    }
};


int main(){
    Solution solution;
    std::string s = "leet**cod*e";
    return 0;
}