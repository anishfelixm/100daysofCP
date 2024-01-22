#include<bits/stdc++.h>

std::vector<int> solve(int n){
    std::vector<int> arr;
    while(arr.size() < n){
        arr.push_back(1);
    }
    return arr;
}

int main(){
    int t, n;
    std::vector<std::vector<int>> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        ans.push_back(solve(n));
    }
    for (auto i : ans){
        for(auto j : i){
            std::cout<<j<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}