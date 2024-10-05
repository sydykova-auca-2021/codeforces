#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;
//    std::string target = "competitive programming";

    std::unordered_set<char> target_set = {'c', 'o', 'd', 'e', 'f', 'r', 'c', 'e', 's'};

    while(n--){
        char c;
        std::cin >> c;


        if(target_set.find(c) != target_set.end()){
//        if(target.find(c) != std::string::npos){
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
