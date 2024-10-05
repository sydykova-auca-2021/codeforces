#include <bits/stdc++.h>

void solve(){
    int t;
    std::cin >> t;

    while(t--){
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        for(int i = 0; i < n; ++i){
            std::cin >> a[i];
        }

        if(a[0] != a[1] && a[0] != a[2]){
            std::cout << 1 << "\n";
        }

        if(a[n-1] != a[n-2] && a[n-1] != a[n-3]){
            std::cout << n << "\n";
        }

        // start from a[1]
        for(int i = 1; i <= n - 2; ++i){
            if(a[i] != a[i-1] && a[i] != a[i+1]){
                std::cout << i + 1 << "\n";
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
