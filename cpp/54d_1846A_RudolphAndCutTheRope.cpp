#include<bits/stdc++.h>

int solve(int n){
    int a, b, cnt = 0;
    std::vector<int> hstack;
    for(int i = 0; i < n; i++){
        std::cin>>a>>b;
        hstack.push_back(a - b);
    }
    sort(hstack.begin(), hstack.end());
    while(hstack.back() > 0){
        cnt ++;
        hstack.pop_back();
    }
    return cnt;
}

int main(){
    int t, n;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        ans.push_back(solve(n));
    }
    for(auto i : ans){
        std::cout<<i<<'\n';
    }
    return 0;
}