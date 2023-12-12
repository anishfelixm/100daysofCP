#include<bits/stdc++.h>

int main(){
    std::unordered_set<char> chars;
    std::string name;
    std::cin>>name;
    int count = 0;
    for (auto i : name){
        if (chars.find(i) == chars.end()){
            count++;
            chars.insert(i);
        }
    }
    if (count % 2 == 0){
        std::cout<<"CHAT WITH HER!";
    }
    else{
        std::cout<<"IGNORE HIM!";
    }
    return 0;
}