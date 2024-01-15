#include<bits/stdc++.h>

int main(){
    int t, a, b, c, max, A, B, C;
    std::vector<std::vector<int>> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>a>>b>>c;
        max = std::max(a, std::max(b, c));
        if(a > b && a > c){
            A = 0;
        }
        else{
            A = std::max(b, c) - a + 1;
        }
        if(b > a && b > c){
            B = 0;
        }
        else{
            B = std::max(a, c) - b + 1;
        }
        if(c > b && c > a){
            C = 0;
        }
        else{
            C = std::max(b, a) - c + 1;
        }
        ans.push_back({A, B, C});
    }
    for(auto i : ans){
        std::cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<"\n";
    }
    return 0;
}