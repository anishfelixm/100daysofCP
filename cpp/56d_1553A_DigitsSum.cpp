#include<bits/stdc++.h>

int solve(int n){
    return (n+1)/10;
}

int main(){
    int t, n;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        ans.push_back(solve(n));
    }
    for (auto i : ans){
        std::cout<<i<<'\n';
    }
    return 0;
}