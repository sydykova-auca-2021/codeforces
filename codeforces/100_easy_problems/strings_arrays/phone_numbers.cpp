#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;
    std::string num;
    std::cin >> num;

    int eight_count = 0;
    for(int i = 0; i < num.length(); ++i){
        if(num[i] == '8'){
            eight_count++;
        }
    }

    // 4, 2
    int res = std::min(eight_count, n / 11);
    std::cout << res << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
