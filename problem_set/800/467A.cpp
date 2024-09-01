#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    int count = 0;
    for(int i = 0; i < n; ++i){
        int a, b;
        std::cin >> a >> b;
        if(b - a >= 2){
            count++;
        }
    }
    std::cout << count << "\n";
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
