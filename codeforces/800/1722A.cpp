#include <bits/stdc++.h>

void solve(){
    int t;
    std::cin >> t;

    std::string correct = "Timur";
    std::sort(correct.begin(), correct.end());

    while(t--){
        int n;
        std::cin >> n;

        std::string str;
        std::cin >> str;

        std::sort(str.begin(), str.end());
        if(str == correct){
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
