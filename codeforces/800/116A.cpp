#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    int count = 0;
    int max_capacity = 0;

    while(n--){
        int a,b;
        std::cin >> a >> b;

        if(b > 0){
            count += b;
        }
        if(a > 0){
            count -= a;
        }

        max_capacity = std::max(max_capacity, count);
    }
    std::cout << max_capacity << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
