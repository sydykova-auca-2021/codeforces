#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MAXN = 200005;

int t, n;
int a[MAXN];
int cnt[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    while (t--) {
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> b;
        int position = 0;
        while (position < n) {
            memset(cnt, 0, sizeof(int)*(n+2)); // Reset counts
            int num_distinct = 0;
            int current_mex = 0;
            int k = position;
            while (k < n) {
                int x = a[k];
                cnt[x]++;
                if (cnt[x] == 1) {
                    num_distinct++;
                }
                while (cnt[current_mex] > 0) {
                    current_mex++;
                }
                if (num_distinct == current_mex) {
                    b.push_back(current_mex);
                    position = k + 1;
                    break;
                }
                k++;
            }
            // If we reach the end without finding num_distinct == current_mex
            if (k == n) {
                // Append current_mex to b
                b.push_back(current_mex);
                position = n;
            }
        }
        cout << b.size() << '\n';
        for (size_t i = 0; i < b.size(); ++i) {
            cout << b[i] << (i + 1 < b.size() ? ' ' : '\n');
        }
    }
    return 0;
}
