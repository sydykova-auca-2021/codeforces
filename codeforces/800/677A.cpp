#include <bits/stdc++.h>

void solve(){
    int n, h;
    std::cin >> n >> h;

    int count = 0;
    while(n--){
        int num;
        std::cin >> num;
        if(num > h){
            count += 2;
        } else {
            count += 1;
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
