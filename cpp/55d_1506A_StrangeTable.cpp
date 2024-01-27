#include<bits/stdc++.h>

#define ll unsigned long long

ll solve(ll n, ll m, ll x){
    int col = (x-1) / n , row = (x - 1) % n;
    return m * (row) + (col + 1);
}

int main(){
    ll t, n, m, x;
    std::vector<ll> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n>>m>>x;
        ans.push_back(solve(n,m,x));
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}