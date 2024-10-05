#include <iostream>

void solve(){
    int t;
    std::cin >> t;

    while(t--){
        long long n;
        std::cin >> n;

        int max_count;
        for(long long i = 1;; ++i){
            if(n % i != 0){
                max_count = i - 1;
                break;
            }
        }
        std::cout << max_count << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    solve();
    return 0;
}
