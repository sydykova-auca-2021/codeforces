#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    std::unordered_map<int, int> mp(n);

    for(int i = 0; i < n; ++i){
        int num;
        std::cin >> num;
        mp[num]++;
    }

    int min_freq = n + 1;
    int missing_num;

    for(const auto& item : mp){
        if(item.second < min_freq){
            min_freq = item.second;
            missing_num = item.first;
        }
    }
    std::cout << missing_num << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
