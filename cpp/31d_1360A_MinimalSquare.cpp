#include<bits/stdc++.h>

int main(){
    int t, a, b, side;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>a>>b;
        side = std::max((2 * (std::min(a,b))), (std::max(a,b)));
        ans.push_back((side * side));
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}