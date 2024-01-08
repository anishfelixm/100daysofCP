#include<bits/stdc++.h>

int main(){
    int t, a, b;
    std::vector<int> ans;
    std::string s;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>s;
        a = stoi(s.substr(0,1));
        b = stoi(s.substr(2,1));
        ans.push_back((a+b));
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}