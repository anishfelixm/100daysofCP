#include<bits/stdc++.h>

int main(){
    int t, n, max, min, temp;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        max = 0, min = 1000000001;
        for(int j = 0; j < n; j++){
            std::cin>>temp;
            min = std::min(min, temp);
            max = std::max(max, temp);
        }
        ans.push_back((max - min));
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}