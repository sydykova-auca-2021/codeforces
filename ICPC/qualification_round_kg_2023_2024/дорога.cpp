#include <bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;

    std::vector<std::pair<int, int>> a(n);

    for(int i = 0; i < n; ++i){
        std::cin >> a[i].first >> a[i].second;
    }

    std::sort(a.begin(), a.end());

    int total_sum = 0;
    int curr_start = a[0].first;
    int curr_end = a[0].second;

    for(int i = 1; i < n; ++i){
        int next_start = a[i].first;
        int next_end = a[i].second;

        if(next_start <= curr_end){
            curr_end = std::max(curr_end, next_end);
        } else {
            total_sum += curr_end - curr_start;
            curr_start = next_start;
            curr_end = next_end;
        }
    }
    total_sum += curr_end - curr_start;
    std::cout << total_sum << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}