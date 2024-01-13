#include<bits/stdc++.h>

int main(){
    int t, n, temp;
    std::vector<std::vector<int>> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        std::unordered_set<int> hset;
        std::vector<int> arr;
        for(int j = 0; j < (2*n); j++){
            std::cin>>temp;
            if(hset.find(temp) == hset.end()){
                hset.insert(temp);
                arr.push_back(temp);
            }
        }
        ans.push_back(arr);
    }
    for(auto i : ans){
        for(auto j : i){
            std::cout<<j<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}