#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    int max_num = a[0];
    int min_num = a[0];
    int count = 0;

    for(int i = 0; i < n; ++i){
        if(a[i] > max_num){
            count++;
            max_num = a[i];
        } else if(a[i] < min_num){
            count++;
            min_num = a[i];
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
