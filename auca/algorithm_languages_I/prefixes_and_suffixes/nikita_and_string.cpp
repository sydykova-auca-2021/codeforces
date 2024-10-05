#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    // We want to find the largest "beautiful" sequence where the pattern is: a's followed by b's followed by a's.

    // Step 1: Count the prefix sum of 'a's
    vector<int> prefixA(n + 1, 0); // To store how many 'a's from the start to each position.
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'a') {
            prefixA[i + 1] = prefixA[i] + 1;
        } else {
            prefixA[i + 1] = prefixA[i]; // Carry forward the count if it's not 'a'
        }
    }

    // Step 2: Count the suffix sum of 'a's
    vector<int> suffixA(n + 1, 0); // To store how many 'a's from each position to the end.
    for (int i = n - 1; i >= 0; --i) {
        if (s[i] == 'a') {
            suffixA[i] = suffixA[i + 1] + 1;
        } else {
            suffixA[i] = suffixA[i + 1]; // Carry forward the count if it's not 'a'
        }
    }

    // Step 3: Find the maximum length of a beautiful sequence.
    int maxLength = 0;
    for (int i = 0; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            // First part has 'a's from the beginning to position i
            int countA1 = prefixA[i];

            // Middle part has 'b's from position i to j
            int countB = 0;
            for (int k = i; k < j; ++k) {
                if (s[k] == 'b') countB++;
            }

            // Third part has 'a's from position j to the end
            int countA2 = suffixA[j];

            // Update maxLength with the total count of a's and b's in this split
            maxLength = max(maxLength, countA1 + countB + countA2);
        }
    }

    cout << maxLength << "\n";
}

int main() {
    solve();
    return 0;
}
