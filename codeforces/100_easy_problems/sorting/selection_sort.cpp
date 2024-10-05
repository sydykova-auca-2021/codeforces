#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    // swap min num

//    7
//    6 4 2 3 1 0 5

//    0 4 2 3 1 6 5 - 0
//    0 1 2 3 4 6 5 - 1
//    0 1 2 3 4 6 5 - 2
//    0 1 2 3 4 6 5 - 3
//    0 1 2 3 4 6 5 - 4
//    0 1 2 3 4 5 6 - 5


    std::vector<int> a(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a[i];
    }

    std::vector<int> res(n);

    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }
        std::swap(a[i], a[min_index]);

        for (int k = 0; k < n; k++) {
            std::cout << a[k] << " ";
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
