#include <bits/stdc++.h>

void solve() {
    int n, k;
    std::cin >> n;

    std::vector<int> a(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    std::cin >> k;

//    long long total_sum = std::accumulate(a.begin(), a.end(), 0);
//    if(k >= n){
//        std::cout << total_sum << "\n";
//        return;
//    }
//
    if(k >= n){

        long long total_sum = 0;
        for(int i = 0; i < n; ++i){
            total_sum += a[i];
        }
        std::cout << total_sum << "\n";
        return;
    }

    long long curr_sum = 0;
    for(int i = 0; i < k; ++i){
        curr_sum += a[i];
    }

    long long max_sum = curr_sum;

    for(int i = k; i < n; ++i){
        curr_sum += a[i] - a[i - k];
        max_sum = std::max(max_sum, curr_sum);
    }
    std::cout << max_sum << "\n";
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}