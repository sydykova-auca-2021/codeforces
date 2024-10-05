#include <bits/stdc++.h>

void solve(){
    int n, k;
    std::cin >> n >> k;
    std::vector<int> a(n);

    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    int count = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] + k <= 5){
            count++;
        }
    }

    int team = (count / 3);
    std::cout << team << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
