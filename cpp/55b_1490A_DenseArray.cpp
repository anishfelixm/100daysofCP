#include<bits/stdc++.h>

int count(int a, int b){
    int ret = 0;
    while((2*a) < b){
        ret++;
        a *= 2;
        //std::cout<<a<<" "<<ret<<"\n";
    }
    return ret;
}

int solve(std::vector<int> arr, int n){
    int cnt = 0;
    for(int i = 1; i < n; i++){
        if(2 * (std::min(arr[i], arr[i-1])) < (std::max(arr[i], arr[i-1]))){
            cnt += count(std::min(arr[i], arr[i-1]), std::max(arr[i],arr[i-1]));
        }
        //std::cout<<arr[i]<<" "<<cnt<<"\n";
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
        ans.push_back(solve(arr, n));
    }
    for (auto i : ans){
        std::cout<<i<<'\n';
    }
    return 0;
}