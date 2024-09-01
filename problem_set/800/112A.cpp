#include <bits/stdc++.h>

void solve(){
    std::string str1, str2;
    std::cin >> str1 >> str2;

    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    if(str1 < str2){
        std::cout << "-1" << "\n";
    } else if (str1 > str2){
        std::cout << "1" << "\n";
    } else {
        std::cout << "0" << "\n";
    }
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
