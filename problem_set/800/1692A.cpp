#include <bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;

    while(n--){
        int a,b,c,d;
        std::cin >> a >> b >> c >> d;


        int count = 0;
        if(b>a) count++;
        if(c>a) count++;
        if(d>a) count++;
        std::cout << count << "\n";

        // returns 1 if true
//        std::cout << (b > a) + (c > a) + (d > a) << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
