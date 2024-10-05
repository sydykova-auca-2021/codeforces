#include <bits/stdc++.h>

const int MAX_VAL = 1000000;

void solve(){
    int n, q;
    std::cin >> n;

    static int arr[MAX_VAL];  // Array to store the permutation
    static int pos[MAX_VAL + 1];  // Array to store positions of elements (1-based indexing)

    // Read the permutation and store positions
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
        // index is value
        // value is index
        pos[arr[i]] = i + 1;
    }

    std::cin >> q;

    for (int i = 0; i < q; ++i) {
        int a, b;
        std::cin >> a >> b;
        if (pos[a] < pos[b]) {
            std::cout << "First" << "\n";
        } else {
            std::cout << "Second" << "\n";
        }
    }

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}