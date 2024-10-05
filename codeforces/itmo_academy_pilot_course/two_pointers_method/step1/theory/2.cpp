#include <bits/stdc++.h>

int main(){
    std::vector<int> a = {3,1,4};
    std::vector<int> b = {2,5};

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());

    std::vector<int> res(b.size(), 0);

    int i = 0;

    for(int j = 0; j < b.size(); ++j){
        while(a[i] < b[j] && i < a.size()){
            i++;
        }
        res[j] = i;
    }

    int max_num = *std::max_element(res.begin(), res.end());

    std::cout << max_num << "\n";

    return 0;
}