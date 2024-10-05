#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;
    std::vector<char> a(n);

    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }


    int count = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] == a[i+1]){
            count++;
        }
    }
    std::cout << count;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
