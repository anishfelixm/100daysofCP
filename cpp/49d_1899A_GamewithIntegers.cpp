#include<bits/stdc++.h>

std::string solve(int n){
    if(n % 3 == 0){
        return "Second";
    }
    else{
        return "First";
    }
}

int main(){
    int t, n;
    std::vector<std::string> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        ans.push_back(solve(n));
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}