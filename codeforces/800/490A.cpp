#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    std::vector<int> pm,ma,pe;

    for(int i = 0; i < n; ++i){
        int num;
        std::cin >> num;

        if(num == 1) pm.push_back(i+1);
        else if(num == 2) ma.push_back(i+1);
        else if(num == 3) pe.push_back(i+1);
    }

    int count = std::min({pm.size(), ma.size(), pe.size()});

    std::cout << count << "\n";

    for(int i = 0; i < count; ++i){
        std::cout << pm[i] << " " << ma[i] << " " << pe[i] << "\n";
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
