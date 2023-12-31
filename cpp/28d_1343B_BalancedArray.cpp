#include<bits/stdc++.h>

int main(){
    int t, n;
    std::vector<int> ns;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        ns.push_back(n);
    }
    for(auto i : ns){
        if (i % 4 != 0){
            std::cout<<"NO"<<"\n";
        }
        else{
            std::vector<int> ans;
            std::cout<<"YES"<<"\n";
            for(int j = 0; j < (i / 2); j++){
                ans.push_back((2*(j + 1)));
            }
            for(int j = 0; j < (i / 2) - 1; j++){
                ans.push_back(ans[j] - 1);
            }
            ans.push_back((3*(i / 2)) - 1);
            for(auto j : ans){
                std::cout<<j<<" ";
            }
            std::cout<<"\n";
        }
    }
    return 0;
}