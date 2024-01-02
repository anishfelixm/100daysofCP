#include<bits/stdc++.h>

int main(){
    int a1, a2, a3, a4, cal = 0;
    std::string s;
    std::unordered_map<char,int> hmap;
    std::cin>>a1>>a2>>a3>>a4;
    std::cin>>s;
    hmap['1'] = a1;
    hmap['2'] = a2;
    hmap['3'] = a3;
    hmap['4'] = a4;
    for (auto i : s){
        cal += hmap[i];
    }
    std::cout<<cal;
    return 0;
}