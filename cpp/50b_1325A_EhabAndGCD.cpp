#include<bits/stdc++.h>

int main(){
    int t, x;
    std::vector<std::vector<int>> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>x;
        ans.push_back({1,x-1});
    }
    for (auto i : ans){
        std::cout<<i[0]<<" "<<i[1]<<"\n";
    }
    return 0;
}