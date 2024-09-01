#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;


    while(n--){
        int a,b,c;
        std::cin >> a >> b >> c;

        if(a < b && b < c){
            std::cout << b << "\n";
        } else if(c < b & b < a){
            std::cout << b << "\n";
        } else if(b < a && a < c){
            std::cout << a << "\n";
        } else if(c < a && a < b){
            std::cout << a << "\n";
        } else if(a < c && c < b){
            std::cout << c << "\n";
        } else if(b < c && c < a){
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
