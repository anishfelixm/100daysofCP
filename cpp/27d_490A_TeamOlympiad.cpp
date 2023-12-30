#include<bits/stdc++.h>

int main(){
    int n, temp;
    std::vector<std::vector<int>> arrays(3);
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>temp;
        arrays[temp - 1].push_back(i + 1);
    }
    int numb = std::min(arrays[0].size(), std::min(arrays[1].size(), arrays[2].size()));
    if (numb != 0){
        std::cout<<numb<<"\n";
        int t1, t2, t3;
        std::vector<std::vector<int>> ans;
        while(numb --){
            t1 = arrays[0].back();
            arrays[0].pop_back();
            t2 = arrays[1].back();
            arrays[1].pop_back();
            t3 = arrays[2].back();
            arrays[2].pop_back();
            ans.push_back({t1, t2, t3});
        }
        for(int i = 0; i < ans.size(); i++){
            for(auto j : ans[i]){
                std::cout<<j<<" ";
            }
            std::cout<<"\n";
        }
    }
    else{
        std::cout<<numb;
    }
    return 0;
}