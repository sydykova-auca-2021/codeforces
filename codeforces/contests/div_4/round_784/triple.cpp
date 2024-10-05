#include <bits/stdc++.h>

void solve(){
    int t;
    std::cin >> t;

    while(t--){
        int n;
        std::cin >> n;

        std::unordered_map<int, int> mp;
        std::vector<int> a(n);
        for(int i = 0; i < n; ++i){
            std::cin >> a[i];
        }

        for(int i = 0; i < n; ++i){
            mp[a[i]]++;
        }

        bool found = false;
        for(auto& pair : mp){
            if(pair.second >= 3){
                std::cout << pair.first << "\n";
                // return;
                found = true;
                break;
            }
        }
        // std::cout << "-1/n";
        if(!found){
            std::cout << "-1\n";
        }
    }
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}