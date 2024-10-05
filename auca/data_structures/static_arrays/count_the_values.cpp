#include <bits/stdc++.h>

const int MAX_VAL = 1000000;

//int arr[MAX_VAL];
//int count[MAX_VAL + 1];

void solve() {
    int n;
    std::cin >> n;

    // static allocates in data segment, not on stack
    // or move vars outside of function, by declaring them globally
    // new - allocates memory on heap

    static int arr[MAX_VAL];
    static int count[MAX_VAL + 1];

//    int* arr = new int[MAX_VAL];
//    int* count = new int[MAX_VAL + 1]();

    // memset - sets a block of memory to a particular value
    memset(count, 0, (MAX_VAL + 1) * sizeof(int));

    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
        // index is value
        // value is count
        count[arr[i]]++;
    }

    // Output unique values and their counts
    for (int i = 1; i <= MAX_VAL; ++i) {
        if (count[i] > 0) {
            std::cout << i << " " << count[i] << "\n";
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}