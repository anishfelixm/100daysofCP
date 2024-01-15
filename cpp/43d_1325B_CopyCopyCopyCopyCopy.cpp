#include<bits/stdc++.h>

int main(){
    int t, n, temp;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        std::unordered_set<int> hset;
        for(int j = 0; j < n; j++){
            std::cin>>temp;
            hset.insert(temp);
        }
        ans.push_back(hset.size());
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}
