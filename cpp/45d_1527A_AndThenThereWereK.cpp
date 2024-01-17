#include<bits/stdc++.h>

int main(){
    int t, n, k;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        k = log2(n);
        k = pow(2, k);
        k--;
        ans.push_back(k);
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}