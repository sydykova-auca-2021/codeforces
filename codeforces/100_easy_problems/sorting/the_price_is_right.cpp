#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    auto min_num = std::min_element(a.begin(), a.end());
    int min_ind = std::distance(a.begin(), min_num);
    std::cout << min_ind << "\n";


//    int min_num = a[0];
//    int min_ind = 0;
//
//    for (int i = 1; i < n; ++i) {
//        if (a[i] < min_num) {
//            min_num = a[i];
//            min_ind = i;
//        }
//    }
//    std::cout << min_ind << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
