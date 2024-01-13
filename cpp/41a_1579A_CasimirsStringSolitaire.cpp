#include<bits/stdc++.h>

int main(){
    int t;
    std::string s;
    std::vector<std::string> ans;
    std::cin>> t;
    for(int i = 0; i < t; i++){
        std::cin>>s;
        std::unordered_map<char, int> hmap;
        for(auto j : s){
            hmap[j]++;
        }
        if(hmap['A'] + hmap['C'] == hmap['B']){
            ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}