#include <bits/stdc++.h>

void solve(){
    int t; // 5
    std::cin >> t;
    std::string target = "competitive programming";


    for(int i = 0; i < t; ++i){
        std::string str;
        std::cin >> str;

        int count = 0;
        for(int i = 0; i < 10; ++i) {
            if(str[i] != target[i]){
                count++;
            }
        }
        std::cout << count << "\n";
    }

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
