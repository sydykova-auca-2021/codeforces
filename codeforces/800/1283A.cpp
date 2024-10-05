#include <bits/stdc++.h>

void solve(){
    int t;
    std::cin >> t;

    while(t--){
        int a,b;
        std::cin >> a >> b;

        int minutes = 0;
        minutes += ((24-a)*60) - b;

        std::cout << minutes << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
