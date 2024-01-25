#include<bits/stdc++.h>

std::vector<int> solve(std::vector<int> b){
    std::vector<int> a;
    sort(b.begin(), b.end());
    a.push_back(b[0]);
    a.push_back(b[1]);
    a.push_back(b[6]-b[0]-b[1]);
    return a;
}

int main(){
    int t, temp;
    std::vector<std::vector<int>> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::vector<int> b;
        for(int j = 0; j < 7; j++){
            std::cin>>temp;
            b.push_back(temp);
        }
        ans.push_back(solve(b));
    }
    for (auto i : ans){
        for(auto j : i)
            std::cout<<j<<" ";
        std::cout<<"\n";
    }
    return 0;
}