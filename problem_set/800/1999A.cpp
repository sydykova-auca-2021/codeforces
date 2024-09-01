#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;


    while(n--){
        int num;
        std::cin >> num;

        std::string str = std::to_string(num);
        int sum = (str[0] - '0') + (str[1] - '0');
        std::cout << sum << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
