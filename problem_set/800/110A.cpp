#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    std::vector<char> a(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }


    int countA = 0;
    int countD = 0;

    for(int i = 0; i < n; ++i){
        if(a[i] == 'A'){
            countA++;
        } else if(a[i] == 'D'){
            countD++;
        }
    }

    if(countA > countD){
        std::cout << "Anton" << "\n";
    } else if(countD > countA){
        std::cout << "Danik" << "\n";
    } else if(countA == countD){
        std::cout << "Friendship" << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
