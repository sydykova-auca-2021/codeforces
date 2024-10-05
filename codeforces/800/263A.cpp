#include <bits/stdc++.h>

void solve(){
    int matrix[5][5];

    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j) {
            std::cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                std::cout << abs(i - 2) + abs(j - 2);
            }
        }
    }
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
