#include<bits/stdc++.h>

int main(){
    int t, n, temp, cnt;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        std::vector<int> arr;
        for (int j = 0; j < n; j++){
            std::cin>>temp;
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end());
        cnt = 0;
        for(int j = 1; j < n; j++){
            cnt += arr[j] - arr[0];
        }
        ans.push_back(cnt);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}