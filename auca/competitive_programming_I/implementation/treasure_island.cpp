#include <bits/stdc++.h>

using namespace std;

// Directions for N, S, W, E
int dx[4] = {-1, 1, 0, 0}; // N, S, W, E
int dy[4] = {0, 0, -1, 1}; // N, S, W, E
char dir_map[4] = {'N', 'S', 'W', 'E'};

int get_reverse_direction(char dir) {
    if (dir == 'N') return 1;  // Reverse of N (North) is S (South)
    if (dir == 'S') return 0;  // Reverse of S (South) is N (North)
    if (dir == 'W') return 3;  // Reverse of W (West) is E (East)
    if (dir == 'E') return 2;  // Reverse of E (East) is W (West)
    return -1; // Should not reach here
}

void solve() {
    int n, m;
    cin >> n >> m;

    // Reading the map
    vector<string> islandMap(n);
    for (int i = 0; i < n; i++) {
        cin >> islandMap[i];
    }

    // Reading the instructions
    int k;
    cin >> k;
    vector<pair<int, int>> instructions(k);
    for (int i = 0; i < k; i++) {
        char dir;
        int len;
        cin >> dir >> len;
        int reverse_dir = get_reverse_direction(dir);
        instructions[i] = {reverse_dir, len};  // Store reversed direction and length
    }

    set<char> validSights;  // Store valid sights

    // Iterate over the entire map to find all available cells (i.e., non-sea cells)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (islandMap[i][j] == '.' || (islandMap[i][j] >= 'A' && islandMap[i][j] <= 'Z')) {
                bool valid = true;
                int x = i, y = j;  // Starting point (potential end point in original instructions)

                // Apply reverse instructions
                for (auto inst : instructions) {
                    int dir = inst.first;
                    int len = inst.second;

                    for (int step = 0; step < len; step++) {
                        x += dx[dir];
                        y += dy[dir];

                        // Check if the new position is within bounds and is penetrable
                        if (x < 0 || x >= n || y < 0 || y >= m || islandMap[x][y] == '#') {
                            valid = false;
                            break;
                        }
                    }

                    if (!valid) break;
                }

                // If the starting point is a sight, mark it as valid
                if (valid && islandMap[x][y] >= 'A' && islandMap[x][y] <= 'Z') {
                    validSights.insert(islandMap[x][y]);
                }
            }
        }
    }

    // Output the result
    if (validSights.empty()) {
        cout << "no solution" << endl;
    } else {
        for (char sight : validSights) {
            cout << sight;
        }
        cout << endl;
    }

}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
