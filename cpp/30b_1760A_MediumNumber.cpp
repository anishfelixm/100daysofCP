#include<bits/stdc++.h>

int main(){
    int t, a, b, c;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>a>>b>>c;
        if(a > b && a < c || a > c && a < b){
            ans.push_back(a);
        }
        else if(b > a && b < c || b > c && b < a){
            ans.push_back(b);
        }
        else{
            ans.push_back(c);
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}