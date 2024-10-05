#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    int denominations[] = {100,20,10,5,1};
    int count = 0;


    for(int bill : denominations){
        count += n / bill;
        n %= bill;
    }

    std::cout << count << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
