#include<bits/stdc++.h>

int main(){
    int t, n;
    std::vector<std::string> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        if (n % 4 == 0){
            ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}