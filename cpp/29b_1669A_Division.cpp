#include<bits/stdc++.h>

int main(){
    int t, rating;
    std::vector<std::string> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>rating;
        if(rating >= 1900){
            ans.push_back("Division 1");
        }
        else if(rating >= 1600){
            ans.push_back("Division 2");
        }
        else if(rating >= 1400){
            ans.push_back("Division 3");
        }
        else{
            ans.push_back("Division 4");
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}