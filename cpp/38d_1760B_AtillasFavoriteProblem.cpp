#include<bits/stdc++.h>

int main(){
    int t, n, cnt;
    std::string s;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        std::cin>>s;
        cnt = 1;
        for(auto j : s){
            cnt = std::max(cnt, (j - 'a') + 1);
        }
        ans.push_back(cnt);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}