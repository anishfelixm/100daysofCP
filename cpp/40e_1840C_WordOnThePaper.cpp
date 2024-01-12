#include<bits/stdc++.h>

int main(){
    int t;
    std::string s, n;
    std::vector<std::string> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        s = "";
        for(int j = 0; j < 8; j++){
            std::cin>>n;
            for (auto k : n){
                if (k != '.'){
                    s += k;
                }
            }
        }
        ans.push_back(s);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}