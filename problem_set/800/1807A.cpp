#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;


    while(n--){
        int a,b,c;
        std::cin >> a >> b >> c;

        if(a+b == c){
            std::cout << "+" << "\n";
        } else if (a-b == c){
            std::cout << "-" << "\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
