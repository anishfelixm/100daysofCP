#include<bits/stdc++.h>

int main(){
    int t, h, m;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>h>>m;
        ans.push_back((24 * 60) - ((h * 60) + m));
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}