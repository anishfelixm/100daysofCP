#include<bits/stdc++.h>

unsigned int solve(int n){
    unsigned int sq = (sqrt(n)), cube = (cbrt(n));
    unsigned int sixth = (sqrt(cbrt(n)));
    //std::cout<<sq<<" "<<cube<<" "<<sixth<<"\n";
    return (sq + cube - sixth);
}

int main(){
    int t, n;
    std::vector<unsigned int> ans;
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