#include <bits/stdc++.h>

class Solution {
public:
    int compress(std::vector<char>& chars) {
        // ["a","a","b","b","c","c","c"]
        // ["a","2","b","2","c","3"]

        std::unordered_map<char, int> up;
        std::vector<char> res;
        for(int i = 0; i < chars.size(); ++i){
            up[chars[i]]++;
        }

        for(auto& pair : up){
            res.push_back(pair.first);
            res.push_back(pair.second + '0');  // Convert value (int) to string and add it
        }

        int res_size = res.size();
        return res_size;
    }
};

int main(){
    Solution solution;
    std::vector<char> chars = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};

    std::cout << solution.compress(chars) << "\n";
}