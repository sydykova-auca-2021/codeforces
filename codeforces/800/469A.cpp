#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    int p;
    std::cin >> p;
    std::set<int> set1;
    for(int i = 0; i < p; ++i){
        int num1;
        std::cin >> num1;
        set1.insert(num1);
    }


    int q;
    std::cin >> q;
    for(int i = 0; i < q; ++i){
        int num2;
        std::cin >> num2;
        set1.insert(num2);
    }

    if(set1.size() == n){
        std::cout << "I become the guy.\n";
    } else {
        std::cout << "Oh, my keyboard!\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
