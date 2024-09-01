#include <bits/stdc++.h>

void solve(){
    std::string str;
    std::cin >> str;

    std::vector<int> numbers;

    for(char c : str){
        if(c != '+'){
            numbers.push_back(c - '0');
        }
    }


    std::sort(numbers.begin(), numbers.end());

    for(int i = 0; i < numbers.size(); ++i){
        std::cout << numbers[i];
        if(i < numbers.size() - 1){
            std::cout << '+';
        }
    }
    std::cout << "\n";

}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
