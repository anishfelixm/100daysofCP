#include<bits/stdc++.h>

int main(){
    int t, n, temp;
    std::vector<std::vector<int>> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        std::vector<int> arr, arr_temp, nxt;
        for(int j = 0; j < n; j++){
            std::cin>>temp;
            arr.push_back(temp);
            arr_temp.push_back(temp);
        }
        sort(arr_temp.begin(), arr_temp.end());
        for(auto j : arr){
            if (j == arr_temp[n-1]){
                nxt.push_back(j - arr_temp[n-2]);
                //std::cout<<"top => "<<nxt.back()<<"\n";
            }
            else{
                nxt.push_back(j - arr_temp[n-1]);
                //std::cout<<nxt.back()<<"\n";
            }
        }
        ans.push_back(nxt);
    }
    for(auto i : ans){
        for(auto j : i){
            std::cout<<j<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}