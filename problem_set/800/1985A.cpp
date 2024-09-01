#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;


    while(n--){
        std::string str1, str2;
        std::cin >> str1 >> str2;

        char temp = str1[0]; // b
        str1[0] = str2[0];
        str2[0] = temp;

        std::cout << str1 << " " << str2 << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
