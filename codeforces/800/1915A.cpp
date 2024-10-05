#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;


    while(n--){
        int a, b, c;
        std::cin >> a >> b >> c;
        if(a != b && a != c){
            std::cout << a << "\n";
        } else if(b != a && b != c){
            std::cout << b << "\n";
        } else if(c != a && c != b){
            std::cout << c << "\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
