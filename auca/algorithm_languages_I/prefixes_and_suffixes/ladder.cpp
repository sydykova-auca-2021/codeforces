#include <bits/stdc++.h>

// 1 2 1 3 3 5 2 1
// 1 3 = increase -> decrease
// 2 3 = decrease
  // 2 4 = DECREASE -> INCREASE
// 8 8 = equal
  // 1 4 = increase -> DECREASE -> INCREASE
// 5 8 = increase -> decrease -> decrease

// YES
// YES
// NO
// YES
// NO
// YES

void solve() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> a(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    // check if suffix already decreased

//    bool increased = false;
//    bool decreased = true;
//
    int increased_count = 0;
    int decreased_count = 0;

    for(int i = 0; i < n; ++i){
        while(m--){
            int l, r;
            std::cin >> l >> r;
            // increase -> decrease
            // increase -> increase
            // same
            // !(decrease -> increase)

            if(decreased_count > 0){
                if(a[i] < a[i-1]){
                    std::cout << "NO\n";
                }
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