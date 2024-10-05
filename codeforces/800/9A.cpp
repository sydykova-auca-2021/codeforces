#include <bits/stdc++.h>

void solve(){
    int y, w;
    std::cin >> y >> w;

    int max_of_two = std::max(y,w);

    int max_sides = 6;
    int count = max_sides - max_of_two + 1;

    int gcd = std::gcd(count, max_sides);

    if(gcd > 1){
        count /= gcd;
        max_sides /= gcd;
        std::cout << count << "/" << max_sides << "\n";
    } else {
        std::cout << count << "/" << max_sides << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
