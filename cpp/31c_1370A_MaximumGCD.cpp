#include<bits/stdc++.h>

int main(){
    int t, n;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        if(n % 2 == 0){
            ans.push_back(n / 2);
        }
        else{
            ans.push_back((n-1) / 2);
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}