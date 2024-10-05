#include <bits/stdc++.h>

void solve(){
    int k, r;
    std::cin >> k >> r;

    int num = 1;
    while(true){
        if(((k * num) % 10 == 0) || ((k * num) - r) % 10 == 0){
            std::cout << num << "\n";
            break;
        }
        num++;
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
