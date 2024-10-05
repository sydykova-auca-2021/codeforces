#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;


    while(n--){
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;

        int max1 = std::max(a,b);
        int max2 = std::max(c,d);

        int min1 = std::min(a,b);
        int min2 = std::min(c,d);

        if(max1 < min2 || max2 < min1){
            std::cout << "NO\n";
        } else {
            std::cout << "YES\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
