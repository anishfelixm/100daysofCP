#include<bits/stdc++.h>

int main(){
    int n, m, k;
    std::cin>>n>>m>>k;
    if(std::min(m, k) < n){
        std::cout<<"NO";
    }
    else{
        std::cout<<"YES";
    }
    return 0;
}