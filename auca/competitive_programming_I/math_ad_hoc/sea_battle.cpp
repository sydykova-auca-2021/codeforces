#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, a, b, k;
    cin >> n >> a >> b >> k;
    string shots;
    cin >> shots;

    vector<int> shoot_positions;

    // Iterate over the grid to find where to shoot
    for (int i = 0; i < n;) {
        // Check if current cell is available for a shot
        if (shots[i] == '0') {
            // Find a block of consecutive zeros of length at least b
            int j = i;
            while (j < n && shots[j] == '0') {
                j++;
            }
            // Calculate the length of the consecutive zeros
            int length = j - i;
            // For every b-length segment, we need to shoot once
            while (length >= b) {
                // Mark the position to shoot in 1-based index (i + b - 1 is the optimal position)
                shoot_positions.push_back(i + b);
                // Move the starting position `b` units ahead to avoid overlapping
                i += b;
                length -= b;
            }
            // Continue from the next unprocessed position
            i = j;
        } else {
            // If it's not a valid position, move to the next one
            i++;
        }
    }

    // Output the result
    cout << shoot_positions.size() << endl;
    for (int pos : shoot_positions) {
        cout << pos << " ";
    }
    cout << endl;

    return 0;
}
