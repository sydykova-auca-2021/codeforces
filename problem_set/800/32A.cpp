#include <bits/stdc++.h>

void solve(){
    std::string str;
    std::cin >> str;

    for(int i = 0; i < str.length(); ++i){
        if(str[i] == '.'){
            std::cout << "0";
        } else if(str[i] == '-') {
            if (str[i + 1] == '.') {
                std::cout << "1";
                ++i;
            } else if(str[i] == '-') {
                std::cout << "2";
                ++i;
            }
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
