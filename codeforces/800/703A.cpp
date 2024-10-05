#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    int countM = 0, countC = 0;

    while(n--){
        int m, c;
        std::cin >> m >> c;
        if(m > c){
            countM++;
        } else if(m < c){
            countC++;
        }
    }

    if(countM > countC){
        std::cout << "Mishka\n";
    } else if(countM < countC){
        std::cout << "Chris\n";
    } else if (countM == countC){
        std::cout << "Friendship is magic!^^\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
