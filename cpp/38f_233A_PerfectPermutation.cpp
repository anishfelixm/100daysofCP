#include<bits/stdc++.h>

int main(){
    int n;
    std::vector<int> ans;
    std::cin>>n;
    if(n % 2 != 0){
        std::cout<<-1;
        return 0;
    }
    for (int i = 1; i <= n; i++){
        if (i % 2 != 0){
            ans.push_back(i + 1);
        }
        else{
            ans.push_back(i - 1);
        }
    }
    for(auto i : ans){
        std::cout<<i<<" ";
    }
    return 0;
}