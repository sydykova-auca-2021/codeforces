#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;
    int available = 0;
    int occurred = 0;

    for(int i = 0; i < n; ++i){
        int event;
        std::cin >> event;

        if(event == -1){
            if(available > 0){
                available--;
            } else {
                occurred++;
            }
        } else if(event > 0){
            available += event;
        }
    }
    std::cout << occurred << "\n";

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
