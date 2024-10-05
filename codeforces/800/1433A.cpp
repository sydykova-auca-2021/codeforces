#include <bits/stdc++.h>

void solve(){
    int t;
    std::cin >> t;

    while(t--){
        int x;
        std::cin >> x;

        std::string str_num = std::to_string(x);

        int first_digit = str_num[0] - '0';

        int count = 0;
        for(int d = 1; d < first_digit; ++d){
            count += 10;
        }

        for(int i = 1; i <= str_num.length(); ++i){
            count += i;
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
