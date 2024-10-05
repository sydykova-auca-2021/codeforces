#include <bits/stdc++.h>

void solve(){
    int n; // 4
    std::cin >> n;
    std::unordered_map<std::string, int> database;

    while(n--){
        std::string str;
        std::cin >> str; // abacaba
        if(database.find(str) == database.end()){
            database[str] = 0;
            std::cout << "OK\n";
        } else {
            int count = ++database[str];
            std::string new_name = str + std::to_string(count);
            database[new_name] = 0;
            std::cout << new_name << "\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
