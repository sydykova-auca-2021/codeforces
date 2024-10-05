#include <bits/stdc++.h>

void solve(){
    int t;
    std::cin >> t;

    while(t--){
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        int count1 = 0, count2 = 0, sum = 0;

        for(int i = 0; i < n; ++i){
            std::cin >> a[i];
            if(a[i] == 1) count1++;
            else count2++;
            sum += a[i];
        }

        if(sum % 2 != 0){
            std::cout << "NO\n";
            continue;
        }

        if (count1 == 0 && count2 % 2 != 0) {
            std::cout << "NO\n";
        } else if (count1 % 2 == 0) {
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
