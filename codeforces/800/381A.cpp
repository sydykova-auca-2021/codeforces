#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    int ser = 0;
    int dima = 0;

    for(int i = 0; i < n; ++i){

        ser += a[i];
    }

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
