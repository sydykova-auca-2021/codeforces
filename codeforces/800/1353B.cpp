#include <bits/stdc++.h>

void solve() {
    int t;
    std::cin >> t;

    while(t--){
        int n, k;
        std::cin >> n >> k; // nums, moves

        std::vector<int> a(n), b(n);

        for(int i = 0; i < n; ++i) std::cin >> a[i];
        for(int i = 0; i < n; ++i) std::cin >> b[i];

//        sort(a.begin(), a.end());
//        sort(b.rbegin(), b.rend());

//        for(int i = 0; i < k; ++i){
//            if (i >= n || b[i] <= a[i]) break;
//            std::swap(a[i], b[i]);
//        }

        while(k--){
            auto min_num = std::min_element(a.begin(), a.end());
            auto max_num = std::max_element(b.begin(), b.end());

            if(*max_num > *min_num){
                int temp = *min_num;
                *min_num = *max_num;
                *max_num = temp;
            } else {
                break;
            }
        }
        int sum = 0;
        for(int i = 0; i < n; ++i){
            sum += a[i];
        }
//        int sum = accumulate(a.begin(), a.end(), 0);
        std::cout << sum << "\n";
    }
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
