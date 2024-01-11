#include<bits/stdc++.h>

int main(){
    int t, n, m, cnt;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n>>m;
        if(n == 1){
            ans.push_back(0);
        }
        else if (n == 2){
            ans.push_back(m);
        }
        else{
            ans.push_back(2 * m);
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}

