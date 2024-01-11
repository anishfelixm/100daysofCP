#include<bits/stdc++.h>

int main(){
    int t, n;
    std::vector<std::vector<int>> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        std::vector<int> arr;
        if (n % 2 == 0){
            for(int j = 1; j <= n; j++){
                if(j % 2 != 0){
                    arr.push_back(j + 1);
                }
                else{
                    arr.push_back(j - 1);
                }
            }
        }
        else{
            for(int j = 1; j <= (n - 3); j++){
                if(j % 2 != 0){
                    arr.push_back(j + 1);
                }
                else{
                    arr.push_back(j - 1);
                }
            }
            arr.push_back(n);
            arr.push_back(n - 2);
            arr.push_back(n-1);
        }
        ans.push_back(arr);
    }
    for(int i = 0; i < ans.size(); i++){
        for(int j  = 0; j < ans[i].size(); j++){
            std::cout<<ans[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}