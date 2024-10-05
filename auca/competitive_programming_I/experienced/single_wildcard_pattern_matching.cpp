#include <bits/stdc++.h>

void solve(){
    int n, m;
    std::cin >> n >> m; // 6 10
    std::string s, t;
    std::cin >> s >> t;

    size_t starPos = s.find('*'); //

    // no star
    if(starPos == std::string::npos){
        if(n != m || s != t) std::cout << "NO\n";
        else std::cout << "YES\n";
    } else {
        int prefixLength = starPos;
        int suffixLength = n - starPos - 1;

        if(prefixLength + suffixLength > m) {
            std::cout << "NO\n";
        } else {
            bool prefixMatches = (s.substr(0, prefixLength) == t.substr(0, prefixLength));
            bool suffixMatches = (s.substr(starPos + 1, suffixLength) == t.substr(m - suffixLength, suffixLength));

            if(prefixMatches && suffixMatches) std::cout << "YES\n";
            else std::cout << "NO\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
