#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;

    // Array to store the current religion of each kingdom
    vector<int> religion(n + 1, 0);

    // Track the current number of alliances
    int alliances = 0;

    // Helper function to check if two kingdoms can form an alliance
    auto can_form_alliance = [&](int i) {
        if (i + k <= n) {
            return religion[i] != 0 && religion[i] == religion[i + k];
        }
        return false;
    };

    // Process each query
    for (int i = 0; i < q; ++i) {
        int m, r;
        cin >> m >> r;

        // Adjust the alliances for the kingdom m before changing its religion
        if (can_form_alliance(m)) alliances--;
        if (m - k > 0 && can_form_alliance(m - k)) alliances--;

        // Update the religion of kingdom m
        religion[m] = r;

        // Recheck and update the alliances for the kingdom m after changing its religion
        if (can_form_alliance(m)) alliances++;
        if (m - k > 0 && can_form_alliance(m - k)) alliances++;

        // Output the current number of alliances
        cout << alliances << endl;
    }

    return 0;
}
