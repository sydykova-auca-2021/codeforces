#include <bits/stdc++.h>

void solve(){
    // n - 1 passes
    // in ith pass loop over all elements

    // 4 2 1 3 5 0

    // pass 1:
    // 2 4 1 3 5 0
    // 2 1 4 3 5 0
    // 2 1 3 4 5 0
    // 2 1 3 ̀4 0 5

    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    for(int pass = 0; pass < n - 1; ++pass){
        for(int i = 0; i < n - 1 - pass; ++i){
            if(a[i] > a[i+1]){
                std::swap(a[i],a[i+1]);
            }
        }
        for(int num : a){
            std::cout << num << " ";
        }
        std::cout << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
