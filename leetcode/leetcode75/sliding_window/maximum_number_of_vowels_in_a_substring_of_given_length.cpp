#include <bits/stdc++.h>

class Solution {
public:
    int maxVowels(std::string s, int k) {
        std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

        int current_count = 0;
        for(int i = 0; i < k; ++i){
            if(vowels.count(s[i])){
                current_count++;
            }
        }

        int max_count = current_count;
        for (int i = k; i < s.size(); i++) {
            if (vowels.count(s[i - k])) {
                current_count--;
            }
            if (vowels.count(s[i])) {
                current_count++;
            }
            max_count = std::max(max_count, current_count);
        }
        return max_count;
    }
};

int main(){
    Solution solution;
    std::string str = "leetcode";
    int k = 3;
    std::cout << solution.maxVowels(str,k) << "\n";
}