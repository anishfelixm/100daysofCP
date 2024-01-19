#include<bits/stdc++.h>

std::string solve(std::vector<int> arr, int n){
    int even_par = arr[0] % 2, odd_par = arr[1] % 2;
    for(int i = 2; i < n; i++){
        if (i % 2 == 0){
            if(arr[i] % 2 != even_par){
                return "NO";
            }
        }
        if (i % 2 == 1){
            if(arr[i] % 2 != odd_par){
                return "NO";
            }
        }
    }
    return "YES"; 
}

int main(){
    int t, n, temp;
    std::vector<std::string> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        std::vector<int> arr;
        for(int j = 0; j < n; j++){
            std::cin>>temp;
            arr.push_back(temp);
        }
        ans.push_back(solve(arr, n));
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}