#include <bits/stdc++.h>

void solve(){
    int t; // 4
    std::cin >> t;

    while(t--){
        int n;
        std::cin >> n;

        std::vector<int> a(n); // 11 13 11 11
        for(int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }
        for(int i = 0; i < n-1; ++i){
            if(a[i] != a[i+1]){
                std::cout << i+1 << "\n";
            }
        }
    }

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
