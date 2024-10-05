#include <bits/stdc++.h>

void solve(){
    int n, k;
    std::cin >> n >> k;

    int problems_solved_time = 0;
    int count = 0;
    for(int i = 1; i <= n; ++i){
        if(problems_solved_time + (5*i) + k <= 240){ //
            problems_solved_time += (5 * i);
            count++;
        } else {
            break;
        }
    }
    std::cout << count << "\n";
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
