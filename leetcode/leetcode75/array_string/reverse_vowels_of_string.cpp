#include <bits/stdc++.h>

class Solution {
public:
    std::string reverseVowels(std::string s) {
        std::unordered_set vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        int left = 0, right = s.length() - 1;

        while (left < right) { // continue until all vowels are swapped
            while (left < right && vowels.find(s[left]) == vowels.end()) {
                left++;
            }

            while (left < right && vowels.find(s[right]) == vowels.end()) {
                right--;
            }

            if (left < right) {
                std::swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};

int main(){
    Solution solution;
    std::string s = "IceCreAm";

    std::cout << solution.reverseVowels(s) << "\n";
}