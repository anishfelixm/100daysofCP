#include<bits/stdc++.h>

int main(){
    int n, temp;
    std::cin>>n;
    std::vector<int>ans (n);
    for(int i = 0; i < n; i++){
        std::cin>>temp;
        ans[temp - 1] = i + 1;
    }
    for(auto i : ans){
        std::cout<<i<<" ";
    }
    return 0;
}