#include <bits/stdc++.h>

void solve() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::unordered_set<char> seen;
        std::string str;
        std::cin >> str;

        bool found = false;
        char currentTask = '\0';

        for (int i = 0; i < n; ++i) {
            if (str[i] != currentTask) {
                if (seen.find(str[i]) != seen.end()) {
                    found = true;
                    std::cout << "NO\n";
                    break;
                } else {
                    seen.insert(str[i]);
                }
                currentTask = str[i];
            }
        }
        if(!found){
            std::cout << "YES\n";
        }
    }
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
