#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    std::map<int, int> mp;
    for(int i = 0; i < n; ++i){
        mp[i + 1] = a[i];
    }

    std::vector<int> result(n);
    for(const auto& pair : mp){
        result[pair.second - 1] = pair.first;
    }

    for(int i : result){
        std::cout << i << " ";
    }
    std::cout << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
