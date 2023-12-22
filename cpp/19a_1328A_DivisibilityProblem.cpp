#include<bits/stdc++.h>

int main(){
    int t, a, b, temp;
    std::vector<std::vector<int>> div;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>a>>b;
        div.push_back({a,b});
        temp = b - (a % b);
        if(temp == b){
            temp = 0;
        }
        ans.push_back(temp);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}