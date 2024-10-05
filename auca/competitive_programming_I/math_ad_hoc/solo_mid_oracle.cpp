#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    // If b >= a, we can complete the task in the first step
    if (b >= a) {
        cout << b << "\n";
        return;
    }

    // Calculate the maximum number of increments per cycle
    long long max_inc_per_cycle = c / d * b;

    // If even the maximum increment is not enough, output -1
    if (max_inc_per_cycle < a) {
        cout << "-1\n";
        return;
    }

    // Binary search for the minimum number of steps required
    long long L = 0, U = 1e6 + 5, n = 0;
    while (L <= U) {
        long long mid = (L + U) / 2;
        long long inc = (mid / c) * b + min((mid % c), d);

        if (inc < a) {
            L = mid + 1;
        } else {
            n = mid;
            U = mid - 1;
        }
    }

    // Output the result
    cout << n << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
