#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> queries(t);
    int max_k = 0;

    // Read input queries and find the maximum k
    for (int i = 0; i < t; i++) {
        cin >> queries[i];
        max_k = max(max_k, queries[i]);
    }

    // Precompute all fractions up to the maximum k
    vector<pair<int, int>> fractions;  // stores fractions as (numerator, denominator)

    int current_k = 0;  // count of fractions generated
    int diagonal = 1;   // the current diagonal level (sum of numerator + denominator)

    while (current_k < max_k) {
        if (diagonal % 2 == 1) { // left-to-right diagonal
            for (int i = 0; i < diagonal && current_k < max_k; i++) {
                int numerator = i - (diagonal - 1);
                int denominator = diagonal - i;
                fractions.push_back({numerator, denominator});
                current_k++;
            }
        } else { // right-to-left diagonal
            for (int i = 0; i < diagonal && current_k < max_k; i++) {
                int numerator = -(diagonal - 1) + i;
                int denominator = diagonal - i;
                fractions.push_back({numerator, denominator});
                current_k++;
            }
        }
        diagonal++;
    }

    // Output the fraction for each query
    for (int i = 0; i < t; i++) {
        int k = queries[i];
        cout << fractions[k - 1].first << "/" << fractions[k - 1].second << endl;
    }

    return 0;
}
