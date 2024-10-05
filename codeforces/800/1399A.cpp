#include <bits/stdc++.h>

void solve(){
    int t;
    std::cin >> t;

    while(t--){
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        for(int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }

        std::sort(a.begin(), a.end());

        bool possible = true;
//        for(int i = 1; i < n; ++i){
        for(int i = 0; i < n - 1; ++i){
            int diff = a[i+1] - a[i];
//            int diff = a[i] - a[i-1];

            if(diff > 1){
                possible = false;
                break;
            }
        }

        if(possible){
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
