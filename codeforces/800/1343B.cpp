//#include <iostream>
//#include <vector>
//using namespace std;
//
//void solve() {
//    int t;
//    cin >> t;
//
//    while (t--) {
//        int n;
//        cin >> n;
//
//        if (n % 4 != 0) {
//            cout << "NO" << endl;
//        } else {
//            cout << "YES" << endl;
//
//            vector<int> array_string(n);
//            int even = 2;
//            for (int i = 0; i < n / 2; ++i) {
//                array_string[i] = even;
//                even += 2;
//            }
//
//            int odd = 1;
//            for (int i = n / 2; i < n - 1; ++i) {
//                array_string[i] = odd;
//                odd += 2;
//            }
//
//            array_string[n - 1] = array_string[n / 2 - 1] + (n / 2) - 1;
//
//            for (int i = 0; i < n; ++i) {
//                cout << array_string[i] << " ";
//            }
//            cout << endl;
//        }
//    }
//}
//
//int main() {
//    solve();
//    return 0;
//}
