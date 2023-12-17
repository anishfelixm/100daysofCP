#include<bits/stdc++.h>

int main(){
    int n;
    std::string winners;
    std::cin>>n>>winners;
    std::unordered_map<char,int> hmap;
    for (auto i : winners){
        hmap[i]++;
    }
    if(hmap['A'] > hmap['D']){
        std::cout<<"Anton";
    }
    else if (hmap['D'] > hmap['A']){
        std::cout<<"Danik";
    }
    else{
        std::cout<<"Friendship";
    }
    return 0;
}