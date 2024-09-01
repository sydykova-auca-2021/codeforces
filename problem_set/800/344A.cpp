#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    std::string str;
    int count = 1;

    while(n--){
        std::string num_str;
        std::cin >> num_str;
        str += num_str;
    }

    for(int i = 0; i < str.size(); ++i){
        if(str[i] == str[i+1]){
            count++;
        }
    }
    std::cout << count << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
