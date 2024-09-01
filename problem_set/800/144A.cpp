#include <bits/stdc++.h>

void solve(){
    std::string str1, str2, str3;
    std::cin >> str1 >> str2 >> str3;

    std::map<char, int> mp1;

    for(char c : str1){
        mp1[c]++;
    }

    for(char c : str2){
        mp1[c]++;
    }

    std::map<char, int> mp2;
    for(char c : str3){
        mp2[c]++;
    }

    if(mp1 == mp2){
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
