#include<bits/stdc++.h>

int solve(int n){
    if(n == 1){
        return 2;
    }
    if (n % 3 == 0){
        return n / 3;
    }
    else if(n % 3 == 1){
        return std::min(((n - 4) / 3) + 2, ((n + 2) / 3) + 1);
    }
    else{
        return (n / 3) + 1;
    }
}

int main(){
    int t, n;
    std::cin>>t;
    std::vector<int> ans;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        ans.push_back(solve(n));
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}