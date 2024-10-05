#include <bits/stdc++.h>

void solve(){
    std::vector<int> nums(4);
    for(int i = 0; i < 4; ++i){
        std::cin >> nums[i];
    }

//    int max_num = *std::max_element(nums.begin(), nums.end());
//    nums.erase(std::remove(nums.begin(), nums.end(), max_num), nums.end());

    std::sort(nums.begin(), nums.end());

//    int a_b_c = max_num;
    int a_b_c = nums[3];
    int a = a_b_c - nums[2];
    int b = a_b_c - nums[1];
    int c = a_b_c - nums[0];

    std::cout << a << " " << b << " " << c << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
