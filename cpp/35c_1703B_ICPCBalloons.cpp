#include<bits/stdc++.h>

int main(){
    int t, n, balloons;
    std::string s;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        std::cin>>s;
        std::unordered_set<char> hset;
        balloons = n;
        for (auto j : s){
            if (hset.find(j) == hset.end()){
                balloons ++;
                hset.insert(j);
            }
        }
        ans.push_back(balloons);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}