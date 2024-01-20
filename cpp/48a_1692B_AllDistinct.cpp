#include<bits/stdc++.h>

int solve(int n){
    int cnt = 0, temp;
    std::unordered_set<int> hset;
    for(int i = 0; i < n; i++){
        std::cin>>temp;
        if(hset.find(temp) != hset.end()){
            cnt++;
        }
        else{
            hset.insert(temp);
        }
    }
    if (cnt % 2 == 0){
        return hset.size();
    }
    return hset.size() - 1;
}

int main(){
    int t, n;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        ans.push_back(solve(n));
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}