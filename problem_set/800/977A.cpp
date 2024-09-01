#include <bits/stdc++.h>

void solve(){
    int n, k;
    std::cin >> n >> k;


    for(int i = 0; i < k; ++i){
        if((n % 10) != 0){
            n -= 1;
        } else if((n % 10 == 0)){
            n /= 10;
        }
    }
    std::cout << n;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
