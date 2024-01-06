#include<bits/stdc++.h>

int main(){
    int t, n, result;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        result = ceil(n / 2.0);
        ans.push_back(result);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}