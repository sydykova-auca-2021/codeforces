#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;


    while(n--){
        int a,b,c;
        std::cin >> a >> b >> c;
        if(a < b && b < c){
            std::cout << "STAIR\n";
        } else if(a < b && b > c){
            std::cout << "PEAK\n";
        } else {
            std::cout << "NONE\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
