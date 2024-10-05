#include <bits/stdc++.h>

class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        int i = 0, j = 0;
        while(i < s.length() && j < t.length()){
            if(s[i] == t[j]){
                i++;
            }
            j++;
        }
        return i == s.length();
    }
};

int main(){
    Solution solution;
    std::string s = "abc", t = "ahbgdc";

    std::cout << std::boolalpha << solution.isSubsequence(s,t) << "\n";
//    std::cout << (solution.isSubsequence(s,t) ? "true\n" : "false\n");
    return 0;
}