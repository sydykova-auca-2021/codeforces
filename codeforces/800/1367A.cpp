#include <bits/stdc++.h>

void solve(){
    int t;
    std::cin >> t;

    while(t--){
        std::string str;
        std::cin >> str;

        std::vector<char> new_str;
        for(int i = 0; i < str.length(); ++i){
            if(i % 2 == 0){
                new_str.push_back(str[i]);
            }
        }
        new_str.push_back(str[str.length() - 1]);

        for(char c : new_str){
            std::cout << c;
        }
        std::cout << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
