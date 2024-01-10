#include<bits/stdc++.h>

int main(){
    int t, n, temp, cnt;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        std::vector<int> arr;
        cnt = 1;
        for(int j = 0; j < n; j++){
            std::cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end());
        arr[0] = arr[0] + 1;
        for (auto j : arr){
            cnt *= j;
        }
        ans.push_back(cnt);
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}