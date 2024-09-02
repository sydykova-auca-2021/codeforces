#include <bits/stdc++.h>

void solve(){
    int n;
    std::cin >> n;

    int count = 0;

    while(n--){
        std::string str;
        std::cin >> str;

        if(str == "Tetrahedron"){
            count += 4;
        } else if(str == "Cube"){
            count += 6;
        } else if(str == "Octahedron"){
            count += 8;
        } else if(str == "Dodecahedron"){
            count += 12;
        } else if(str == "Icosahedron"){
            count += 20;
        }
    }
    std::cout << count << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
