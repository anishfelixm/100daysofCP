#include<bits/stdc++.h>

int main(){
    int n;
    std::string s;
    std::cin>>n>>s;
    std::unordered_set<char> hset;
    for(auto i : s){
        hset.insert(tolower(i));
    }
    if(hset.size() == 26){
        std::cout<<"YES";
    }
    else{
        std::cout<<"NO";
    }
    return 0;
}