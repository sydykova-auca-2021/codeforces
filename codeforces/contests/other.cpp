#include <bits/stdc++.h>

void solve(){
    int t;
    std::cin >> t;

    while (t--) {
        int a, b;
        std::cin >> a >> b;

        for(int i = 1; ; ++i){
            if((i - a) + (b - i) == std::abs(b - a)) {
                std::cout << (i - a) + (b - i) << "\n";
                break;
            }
        }

//        int i = 1;
//        while(true){
//            if((i - a) + (b - i) == std::abs(b - a)){
//                break;
//            }
//            ++i;
//        }
//        std::cout << (i - a) + (b - i) << "\n";
    }
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}