#include<bits/stdc++.h>

int main(){
    int t, n, m;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n>>m;
        if((n % 2 == 0) && (m % 2 == 0)){
            ans.push_back(m * (n / 2));
        }
        else if((n % 2 == 0) && (m % 2 != 0)){
            ans.push_back(m * (n / 2));
        }
        else if((n % 2 != 0) && (m % 2 == 0)){
            ans.push_back(n * (m / 2));
        }
        else{
            ans.push_back(((n / 2) + 1) + (((m - 1) / 2) * (n)));
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}