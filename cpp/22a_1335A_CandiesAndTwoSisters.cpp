#include<bits/stdc++.h>

int main(){
    int t, temp;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>temp;
        if(temp % 2 != 0){
            ans.push_back(temp / 2);
        }
        else{
            ans.push_back((temp / 2) - 1);
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}