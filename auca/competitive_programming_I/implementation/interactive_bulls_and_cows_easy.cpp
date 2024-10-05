#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Function to check bulls and cows between two strings
pair<int, int> checkBullsAndCows(const string& guess, const string& secret) {
    int bulls = 0, cows = 0;
    vector<bool> used_in_secret(4, false);
    vector<bool> used_in_guess(4, false);

    // First pass to check for bulls
    for (int i = 0; i < 4; ++i) {
        if (guess[i] == secret[i]) {
            bulls++;
            used_in_secret[i] = true;
            used_in_guess[i] = true;
        }
    }

    // Second pass to check for cows
    for (int i = 0; i < 4; ++i) {
        if (!used_in_guess[i]) {
            for (int j = 0; j < 4; ++j) {
                if (!used_in_secret[j] && guess[i] == secret[j]) {
                    cows++;
                    used_in_secret[j] = true;
                    break;
                }
            }
        }
    }
    return {bulls, cows};
}

int main() {
    // Possible digit combinations of length 4 with unique digits
    vector<string> candidates;
    string digits = "0123456789";

    // Generate all possible 4-digit strings with unique digits
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (j == i) continue;
            for (int k = 0; k < 10; ++k) {
                if (k == i || k == j) continue;
                for (int l = 0; l < 10; ++l) {
                    if (l == i || l == j || l == k) continue;
                    candidates.push_back({digits[i], digits[j], digits[k], digits[l]});
                }
            }
        }
    }

    // Main loop to guess
    for (const auto& guess : candidates) {
        cout << guess << endl;
        cout.flush();

        int bulls, cows;
        cin >> bulls >> cows;

        // If we have found the correct number
        if (bulls == 4 && cows == 0) {
            break;
        }
    }

    return 0;
}
