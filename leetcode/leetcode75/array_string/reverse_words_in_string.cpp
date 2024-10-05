#include <bits/stdc++.h>

class Solution {
public:
    std::string reverseWords(std::string s) {
        std::vector<std::string> words;

        std::stringstream ss(s); // "the sky is blue"
        std::string word;

        while (ss >> word) {
            words.push_back(word);
        }

        int left = 0, right = words.size() - 1;

        while(left < right){
            std::swap(words[left], words[right]);
            left++;
            right--;
        }
        std::string res;
        for(int i = 0; i < words.size(); ++i){
            res += words[i];
            if(i != words.size() - 1){
                res += " ";
            }
        }
        return res;
    }
};

int main(){
    Solution solution;
    std::string s = "a good   example";

    std::cout << solution.reverseWords(s) << "\n";
}