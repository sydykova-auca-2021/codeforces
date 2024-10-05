#include <bits/stdc++.h>

void solve(){
    int t;
    std::cin >> t;

    while(t--){
        int n;
        std::cin >> n;

        std::vector<int> res;
        int place = 1;

        while(n > 0){
            if(n % 10 != 0){
                res.push_back((n%10)*place);
            }
            n /= 10;
            place *= 10;
        }

        std::cout << res.size() << "\n";
        for(int r : res){
            std::cout << r << " ";
        }
        std::cout << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
