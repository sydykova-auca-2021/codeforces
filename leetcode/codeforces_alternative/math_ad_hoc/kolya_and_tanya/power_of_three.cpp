#include <bits/stdc++.h>

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;

        while(n % 3 == 0){
            n /= 3;
        }

        return (n == 1);
    }
};

int main(){
    Solution solution;
    int n;
    std::cin >> n;

    if(solution.isPowerOfThree(n)){
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
}