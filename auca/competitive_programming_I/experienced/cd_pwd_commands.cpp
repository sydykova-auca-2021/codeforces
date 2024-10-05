#include <bits/stdc++.h>

//std::vector<std::string> splitPath(const std::string& path){
//    std::vector<std::string> result;
//    std::stringstream ss(path);
//    std::string token;
//
//    while(std::getline(ss, token, '/')){
//        if(!token.empty() && token != "."){
//            result.push_back(token);
//        }
//    }
//    return result;
//}

void solve(){
    int n;
    std::cin >> n; // 7
    std::string cmd;
    std::vector<std::string> curr_path;

    while(n--){
        std::cin >> cmd;
        if(cmd == "pwd"){
            std::cout << "/";
            for(std::string path : curr_path){
                std::cout << path << "/";
            }
            std::cout << "\n";


        } else if(cmd == "cd"){
            std::string path;
            std::cin >> path;

            if (path[0] == '/') {
                curr_path.clear();
            }

//            std::vector<std::string> parts = splitPath(path);

            std::vector<std::string> parts;
            std::stringstream ss(path);
            std::string token;

            // divide into parts
            // input, output, delimiter
            while(std::getline(ss, token, '/')){
                if(!token.empty() && token != "."){
                    parts.push_back(token);
                }
            }

            for(std::string part : parts){
                if(part == ".."){
                    curr_path.pop_back();
                } else {
                    curr_path.push_back(part);
                }
            }
        }
    }
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}
