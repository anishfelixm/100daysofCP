#include<bits/stdc++.h>

int main(){
    int t, x, y, n, k;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>x>>y>>n;
        k = (n / x);
        k = (k * x) + y;
        if(k  > n){
            k -= x;
        }
        ans.push_back(k);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}