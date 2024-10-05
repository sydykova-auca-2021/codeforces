#include <bits/stdc++.h>

bool isValidWord(const std::string word){
    if(word.empty() || word.length() > 16) return false;

    for(char ch : word){
        if(!isalnum(ch) && ch != '_') return false;
    }
    return true;
}

bool isValidHostname(const std::string &hostname){
    if(hostname.empty() || hostname.length() > 32) return false;

    int dot_pos = hostname.find('.');

    int start = 0;
    while(dot_pos != std::string::npos){
        std::string word = hostname.substr(start, dot_pos - start);
        if(word.empty() || word.length() > 32) return false;
        if(!isValidWord(word)) return false;
        start = dot_pos + 1;
        dot_pos = hostname.find('.', start);
    }
    std::string last_word = hostname.substr(start);
    if(!isValidWord(last_word)) return false;
    return true;
}

void solve(){
    std::string str;
    std::cin >> str;

    if(str.empty() || str.length() > 100){
        std::cout << "NO\n";
        return;
    }

    int a_pos = str.find('@');
    int slash_pos = str.find('/', a_pos + 1);

    if(a_pos == std::string::npos || a_pos == 0 || a_pos >= str.length() - 1){
        std::cout << "NO\n";
        return;
    }

    std::string username = str.substr(0, a_pos);
    if(!isValidWord(username)){
        std::cout << "NO\n";
        return;
    }

    std::string hostname, resource;
    if(slash_pos != std::string::npos){
        hostname = str.substr(a_pos + 1, slash_pos - a_pos - 1);
        resource = str.substr(slash_pos + 1);
        if(resource.empty() || resource.length() > 16){
            std::cout << "NO\n";
            return;
        }
        if(!isValidHostname(hostname)){
            std::cout << "NO\n";
            return;
        }
        if(!isValidWord(resource)){
            std::cout << "NO\n";
            return;
        }
    } else {
        hostname = str.substr(a_pos + 1);
        if(!isValidHostname(hostname)){
            std::cout << "NO\n";
            return;
        }
    }
    std::cout << "YES\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
    return 0;
}