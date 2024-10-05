#include <bits/stdc++.h>

class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        // 1,2,2,1,1,3

        std::unordered_map<int,int> mp;
        std::unordered_set<int> st;
        // {1 : 3, 2 : 2, 3 : 1}

        for(int i = 0; i < arr.size(); ++i){
            mp[arr[i]]++;
        }

        for (auto num_pair : mp) {
            if (st.find(num_pair.second) != st.end()) {
                return false;
            }
            st.insert(num_pair.second);
        }
        return true;
    }
};

int main(){
    Solution solution;
    std::vector<int> arr = {1,2,2,1,1,3};
    std::cout << std::boolalpha << solution.uniqueOccurrences(arr) << "\n";
}