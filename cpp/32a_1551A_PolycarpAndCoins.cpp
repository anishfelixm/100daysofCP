#include<bits/stdc++.h>

int main(){
    int t, n, c1, c2;
    std::vector<std::vector<int>> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        c2 = (n / 3);
        c1 = n - (2 * c2);
        if(c1 - c2 == 2){
            c1 = c1 - 2;
            c2 = c2 + 1;
        }
        ans.push_back({c1,c2});
    }
    for(auto i : ans){
        std::cout<<i[0]<<" "<<i[1]<<"\n";
    }
    return 0;
}