#include <bits/stdc++.h>

void solve(){
    std::string a,b;
    std::cin >> a >> b;

    std::string res;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            res += '1';
        } else {
            res += '0';
        }
    }
    std::cout << res << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
