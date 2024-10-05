#include <bits/stdc++.h>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string merged;
        int i = 0, j = 0;

        while (i < word1.length() && j < word2.length()) {
            merged += word1[i];
            i++;
            merged += word2[j];
            j++;
            // merged += word1[i++]
            // merged += word2[j++]
        }

        while (i < word1.length()) {
            merged += word1[i++];
        }

        while (j < word2.length()) {
            merged += word2[j++];
        }
        return merged;
    }
};

int main(){
    Solution solution;
    std::string word1 = "ab", word2 = "pqrs";
    std::cout << "Merged string: " << solution.mergeAlternately(word1, word2) << "\n";
    return 0;
}