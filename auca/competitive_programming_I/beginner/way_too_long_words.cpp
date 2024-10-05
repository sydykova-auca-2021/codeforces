#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::string word;
        std::cin >> word;

        if (word.length() > 10) {
            std::cout << word[0] << word.length() - 2 << word.back() << std::endl;
        } else {
            std::cout << word << "\n";
        }
    }
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
