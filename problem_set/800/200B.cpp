#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    std::vector<int> a(n);

    int sum = 0;
    for(int i = 0; i < n;++i){
        std::cin >> a[i];
        sum += a[i];
    }

    double mean = static_cast<double>(sum) / n;

    // fixed - prints 0 in the end
    std::cout << std::fixed << std::setprecision(12) << mean << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
