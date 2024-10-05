#include <bits/stdc++.h>

void solve(){
    int a,b,c,d;
    std::cin >> a >> b >> c >> d;

    std::string str;
    std::cin >> str;

    int sum = 0;
    for(char ch : str){
        if(ch == '1'){
            sum += a;
        } else if(ch == '2'){
            sum += b;
        } else if(ch == '3'){
            sum += c;
        } else if(ch == '4'){
            sum += d;
        }
    }
    std::cout << sum << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
