#include<bits/stdc++.h>

std::vector<int> solve(int n){
    return {2, n-1};
}

int main(){
    int t, P;
    std::vector<std::vector<int>> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>P;
        ans.push_back(solve(P));
    }
    for (auto i : ans){
        std::cout<<i[0]<<" "<<i[1]<<"\n";
    }
    return 0;
}