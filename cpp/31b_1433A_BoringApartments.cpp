#include<bits/stdc++.h>

int main(){
    int t, x, dig, num;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>x;
        dig = 0;
        dig += (10 * ((x % 10) - 1));
        num = log10(x) + 1;
        dig += ((num) * (1 + num)) / 2;
        ans.push_back(dig);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}