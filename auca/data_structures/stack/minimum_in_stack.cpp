#include <bits/stdc++.h>
using namespace std;

//10
//2
//1 4
//1 6
//1 2
//1 5
//2
//2
//1 1
//2
//1 3

//-1 4 4 2 2 2 4 1 4 3

void solve(){
    int q;
    cin >> q;

    stack<int> st; // 4 6 2 5
    while(q--){
        int a,b;
        cin >> a >> b;

        if(a == '1'){
            st.push(b);
        } else if(a == '2'){
            st.pop();
        }

        if(st.empty()){
            std::cout << "-1";
        } else {


        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}