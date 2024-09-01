#include <bits/stdc++.h>


void solve(){
    int a, b;
    std::cin >> a >> b;
    int count = 0;
    while(a <= b){
       a *= 3;
       b *= 2;
       count++;
    }
    std::cout << count;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
