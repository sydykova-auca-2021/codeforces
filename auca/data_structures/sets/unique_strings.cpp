#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    std::set<std::string> st;
    for(int i = 0; i < n; ++i){
        std::string str;
        std::cin >> str;
        st.insert(str);
    }

    for(std::string s : st){
        std::cout << s << " ";
    }
    std::cout << "\n";
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}