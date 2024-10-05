#include <bits/stdc++.h>

void solve(){
    int a,b,c;
    std::cin >> a >> b >> c;

    std::vector<int> points{a,b,c};
//    int points[] = {a,b,c};

    std::sort(points.begin(), points.end());
    int median = points[1];
    int distance = abs(a - median) + abs(b - median) + abs(c - median);
    std::cout << distance << "\n";


//    int dist;
//    if(a < b && b < c){
//        dist = (c - b) + (b - a);
//    } else if(c < b && b < a){
//        dist = (a - b) + (b - c);
//    } else if(b < a && a < c){
//        dist = (c - a) + (a - b);
//    } else if(c < a && a < b){
//        dist = (b - a) + (a - c);
//    } else if(a < c && c < b) {
//        dist = (b - c) + (c - a);
//    } else if(b < c && c < a){
//        dist = (a - c) + (c - b);
//    }
//    std::cout << dist << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
