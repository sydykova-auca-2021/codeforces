#include <bits/stdc++.h>

void solve(){
    int n, t;
    std::cin >> n >> t;

    std::vector<char> vec(n);

    for(int i = 0; i < n; ++i){
        std::cin >> vec[i];
    }


    for(int j = 1; j <= t; ++j) {
        for (int i = 0; i < n - 1; ++i) {
            if (vec[i] == 'B' && vec[i + 1] == 'G') {
//                std::swap(vec[i], vec[i + 1]);
                char temp = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = temp;
                i++;
            }
        }
    }

    for(char c : vec){
        std::cout << c;
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
