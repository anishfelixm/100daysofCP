#include<bits/stdc++.h>

int main(){
    int t, n, a, b, ind, max_b;
    std::vector<int> ans;
    std::cin>>t;
    for (int j = 0; j < t; j++){
        std::cin>>n;
        ind = 0, max_b = 0;
        for(int j = 0; j < n; j++){
            std::cin>>a>>b;
            if(a <= 10){
                if(b > max_b){
                    max_b = b;
                    ind = j + 1;
                }
            }
        }
        ans.push_back(ind);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}