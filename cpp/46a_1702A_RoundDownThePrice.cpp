#include<bits/stdc++.h>

int main(){
    int t, m, k;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>m;
        k = log10(m);
        ans.push_back(m - pow(10, k));
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}