#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;


    while(n--){
        int num;
        std::cin >> num;
        if(num >= 1900){
            std::cout << "Division 1\n";
        } else if(num >= 1600 && num <= 1899){
            std::cout << "Division 2\n";
        } else if(num >= 1400 && num <= 1599){
            std::cout << "Division 3\n";
        } else if(num <= 1399){
            std::cout << "Division 4\n";
        }

    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
