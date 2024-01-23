#include<bits/stdc++.h>

std::string solve(int a, int b, int c){
    if (c % 2 == 0){
        if (a > b){
            return "First";
        }
        else{
            return "Second";
        }
    }
    else{
        if(b > a){
            return "Second";
        }
        else{
            return "First";
        }
    }
}

int main(){
    int t, a, b, c;
    std::vector<std::string> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>a>>b>>c;
        ans.push_back(solve(a, b, c));
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}