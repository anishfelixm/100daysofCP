#include<bits/stdc++.h>
#include<cmath>

int main(){
    int t, n, x, result;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n>>x;
        if(n <= 2){
            result = 1;
        }
        else{
            result = ceil((n-2)/static_cast<double>(x)) + 1;   
        }
        ans.push_back(result);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}