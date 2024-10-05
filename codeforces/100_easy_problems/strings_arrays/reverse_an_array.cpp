#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n; // 5

    std::vector<int> a(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a[i]; // 2 3 5 5 1
    }

    int left = 0, right = n - 1;

    while(left < right){
        std::swap(a[left],a[right]);
        left++;
        right--;
    }

    for(int i = 0; i < n; ++i){
        std::cout << a[i] << " ";
    }
    std::cout << "\n";

//    for (int i = n - 1; i >= 0; --i) {
//        std::cout << a[i] << " ";
//    }
//
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
