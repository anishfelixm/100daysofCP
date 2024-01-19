#include<bits/stdc++.h>

int solve(std::vector<int> arr, int n){
    int cnt = 0;
    for(int i = 0; i < (n / 2); i++){
        cnt += (arr[n - 1 - i ] - arr[i]);
        //std::cout<<cnt<<" "<<arr[n - 1 - i]<<" "<<arr[i]<<"\n";
    }
    return cnt;
}

int main(){
    int t, n, temp;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        std::vector<int> arr;
        for(int j = 0; j < n; j++){
            std::cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end());
        ans.push_back(solve(arr, n));
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}