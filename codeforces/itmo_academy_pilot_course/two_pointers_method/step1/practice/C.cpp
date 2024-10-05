#include <bits/stdc++.h>

void solve(){
    int n, m;
    std::cin >> n >> m;

    std::vector<int> a(n), b(m);
    std::vector<int> res(m,0);

    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }
    for(int i = 0; i < m; ++i){
        std::cin >> b[i];
    }

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());


//    8 7
//    1 1 3 3 3 5 8 8
//    1 3 3 4 5 5 5

    

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}