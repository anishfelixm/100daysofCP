#include<bits/stdc++.h>

int solve(std::string s, int n){
    std::unordered_set<std::string> hset;
    hset.insert(s.substr(0, 2));
    for(int i = 2; i < n; i++){
        hset.insert(s.substr(i-1, 2));
    }
    return hset.size();
}

int main(){
    int t, n;
    std::string s;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        std::cin>>s;
        ans.push_back(solve(s, n));
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}