#include<bits/stdc++.h>

int main(){
    std::string s;
    std::getline(std::cin, s);
    std::unordered_set<char> hset;
    for(int i = 0; i < s.size(); i++){
        if(isalpha(s[i])){
            hset.insert(s[i]);
        }
    }
    std::cout<<hset.size();
    return 0;
}