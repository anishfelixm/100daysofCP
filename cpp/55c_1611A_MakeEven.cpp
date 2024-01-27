#include<bits/stdc++.h>

int solve(int n){
    if(n % 2 == 0){
        return 0;
    }
    int f_even = -1, temp = n, k;
    while(temp > 0){
        k = temp % 10;
        if(k % 2 == 0){
            f_even = log10(temp) + 1;
        }
        temp /= 10;
        //std::cout<<k<<" "<<temp<<" "<<f_even<<"\n";
    }
    if(f_even == -1){
        return -1;
    }
    if(f_even == 1){
        return 1;
    }
    else{
        return 2;
    }
}

int main(){
    int t, n;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        ans.push_back(solve(n));
    }
    for (auto i : ans){
        std::cout<<i<<'\n';
    }
    return 0;
}