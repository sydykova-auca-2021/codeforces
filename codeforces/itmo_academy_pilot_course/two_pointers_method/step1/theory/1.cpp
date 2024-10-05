#include <bits/stdc++.h>

int main(){
    std::vector<int> a = {1,3,5,8,10};
    std::vector<int> b = {2,6,7,9,13};
    // 1 2 3 4 5
    std::vector<int> res(a.size() + b.size());

    int i = 0, j = 0;

    // 1 2 3
    while(i < a.size() || j < b.size()){
        if(a[i] < b[j]){
            res[i+j] = a[i];
            i++;
        } else {
            res[i+j] = b[j];
            j++;
        }
    }

    for(int num : res){
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}