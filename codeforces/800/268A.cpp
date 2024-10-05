#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n; // 3

    std::vector<std::pair<int, int>> numbers(n);

    for(int i = 0; i < n; ++i){
        int home, guest;
        std::cin >> home >> guest;
        numbers[i] = {home, guest};
    }

    int count = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(i != j){
                if(numbers[i].first == numbers[j].second){
                    count++;
                }
            }
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
