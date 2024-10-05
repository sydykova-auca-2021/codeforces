#include <bits/stdc++.h>

void solve(){
    std::string str;
    std::cin >> str;

    std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};

    std::vector<char> res;
    for(int i = 0; i < str.length(); ++i){
        if(vowels.find(str[i]) == vowels.end()){ // if cons
            res.push_back(std::tolower(str[i]));
        }
    }
    for(char c : res){
        std::cout << '.' << c;
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
