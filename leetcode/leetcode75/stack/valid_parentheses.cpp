#include <bits/stdc++.h>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()){
                    return false;
                }

                if ((ch == ')' && st.top() != '(') ||
                    (ch == '}' && st.top() != '{') ||
                    (ch == ']' && st.top() != '[')) {
                    return false;
                } else {
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};

int main() {
    Solution solution;

    std::string s = "(]";
    std::cout << (solution.isValid(s) ? "true" : "false") << "\n";

    return 0;
}
