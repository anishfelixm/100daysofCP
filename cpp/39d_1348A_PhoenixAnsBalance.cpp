#include<bits/stdc++.h>

int main(){
    int t, n, a, b;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        a = 0, b = 0;
        for(int j = 1; j < (n/2); j++){
            a += pow(2, j);
            b += pow(2,(n-j));
        }
        a += pow(2,n);
        b += pow(2, n/2);
        ans.push_back(abs(a-b));
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}