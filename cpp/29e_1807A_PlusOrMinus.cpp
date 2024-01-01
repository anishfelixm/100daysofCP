#include<bits/stdc++.h>

int main(){
    int t, a, b, c;
    std::vector<char> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>a>>b>>c;
        if((a + b) == c){
            ans.push_back('+');
        }
        else{
            ans.push_back('-');
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}