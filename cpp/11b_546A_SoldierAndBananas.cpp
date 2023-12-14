#include<bits/stdc++.h>

int main(){
    int k, n, w;
    std::cin>>k>>n>>w;
    int ans = (w * (k + w * k) / 2) - n;
    if (ans > 0){
        std::cout<<ans;
    }
    else{
        std::cout<<0;
    }
    return 0;
}