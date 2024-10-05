#include <bits/stdc++.h>

void solve(){
    int y;
    std::cin >> y;

    while(true){
        y++;

        std::string new_str = std::to_string(y);
        std::set<char> digits;
        bool allDistinct = true;

        for(char digit : new_str){
            // 1 - exists
            // 0 - doesn't exist
            if(digits.count(digit) > 0){
                allDistinct = false;
                break;
            } else {
                digits.insert(digit);
            }
        }

        if(allDistinct){
            std::cout << y << "\n";
            break;
        }
    }

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
