#include <bits/stdc++.h>
// reverse and strip
// struct Data
// bool compare
// solve

// reverse & remove 0
int reverse_and_strip(int x) {
    // extract last digit
    // add to num * 10 (since it's next digit)
    // remove last digit

    int rev = 0;
    while (x > 0) {
        int digit = x % 10;
        rev = rev * 10 + digit;
        x /= 10; //
    }
    return rev;
}

struct Data {
    int reversed_number;
    int index;
    int original_number;
};


bool compare(const Data &a, const Data &b) {
    if (a.reversed_number != b.reversed_number)
        return a.reversed_number < b.reversed_number; // Sort by reversed number ascending
    else
        return a.index > b.index; // If reversed numbers are equal, sort by decreasing index
}

// 10
// 10 31 41 3100 310 31000 43 54 1000 14

// 1 13 14 13 13 13 34 45 1 41
// (1,0) (1,8) (13,1) (13,3) (13,4) (13,5) (41,9) (45,7)
// (1,8) (1,0) (13,5) (13,4) (13,3) (13,1) (41,9) (45,7)

// 1000 10 31000 310 3100 31 14 54

// reverse nums
// sort in ascending order (descending by index)
// return original nums

void solve() {
    int N;
    std::cin >> N;

    std::vector<Data> data(N);

    for (int i = 0; i < N; ++i) {
        int number;
        std::cin >> number;

        int reversed = reverse_and_strip(number);

        // populate info
        data[i].reversed_number = reversed;
        data[i].index = i;
        data[i].original_number = number;
    }

    std::sort(data.begin(), data.end(), compare);

    for (int i = 0; i < N; ++i) {
        std::cout << data[i].original_number << " ";
    }
    std::cout << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
