#include <bits/stdc++.h>

void solve(){
    std::string str;
    std::cin >> str;

    int count_lower = 0;
    int count_upper = 0;

    for(char c : str){
        if(islower(c)){
            count_lower++;
        } else if(isupper(c)){
            count_upper++;
        }
    }


    if(count_lower >= count_upper){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    } else if(count_lower < count_upper) {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }

    std::cout << str << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
