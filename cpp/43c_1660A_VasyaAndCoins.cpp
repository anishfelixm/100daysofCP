#include<bits/stdc++.h>

int main(){
    int t, a, b;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>a>>b;
        if (a == 0){
            ans.push_back(1);
        }
        else{
            ans.push_back(a + (2 * b) + 1);
        }
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}