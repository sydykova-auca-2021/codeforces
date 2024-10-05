#include <bits/stdc++.h>

bool isPrime(int num){
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= std::sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void solve(){
    int n, m;
    std::cin >> n >> m;

    int next = n + 1;
    while(!isPrime(next)){
        ++next;
    }

    if(next == m){
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
