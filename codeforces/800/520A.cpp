#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::string str;
    std::getline(std::cin, str);

    std::unordered_set<char> letters;
    for(char c : str){
        if(std::isalpha(c)){
            letters.insert(std::tolower(c));
        }
    }


    if(letters.size() == 26){
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
