#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    while(n--){
        std::string str;
        std::cin >> str;


        if(str[0] == 'b' && str[1] == 'a') {
            std::cout << "YES\n";
        } else if(str[1] == 'c' && str[2] == 'b') {
            std::cout << "YES\n";
        } else if(str[0] == 'c' && str[2] == 'a'){
            std::cout << "YES\n";
        } else if(str[0] == 'a' && str[2] == 'c'){
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
