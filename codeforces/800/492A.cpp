#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    int height = 0;
    int total_cubes = 0;

    // sum of consecutive nums = (x(x+1))/2
    while(true){ // until break
        height++;
        total_cubes += (height * (height + 1) / 2);
        if(total_cubes > n){
            height--;
            break;
        }
    }
    std::cout << height << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
