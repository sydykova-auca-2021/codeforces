#include <bits/stdc++.h>

class Solution {
public:
    bool isPalindrome(std::string s) {
        std::string str;
        for(char c : s){
            if(std::isalnum(c)){
                str += std::tolower(c);
            }
        }

        int left = 0;
        int right = str.length() - 1;

        while (left < right) {
            if (str[left] == str[right]) {
                left++;
                right--;
            } else {
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution solution;
    std::string s = "A man, a plan, a canal: Panama";
    std::cout << (solution.isPalindrome(s) ? "true" : "false") << "\n";
    return 0;
}