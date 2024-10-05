#include <bits/stdc++.h>

class Solution {
public:
    int lengthOfLongestSubstring(const std::string& s) {
        std::unordered_set<char> st;
        int left = 0;
        int right = 0;
        int maxLength = 0;

        while(right < s.length()){
            // if right char is found, erase and move left char
            while (st.find(s[right]) != st.end()) {
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxLength = std::max(maxLength, right - left + 1);
            ++right;
        }
        return maxLength;
    }
};

int main(){
    Solution solution;
    std::string s = "abcabcbb";
    std::cout << solution.lengthOfLongestSubstring(s) << "\n";
}