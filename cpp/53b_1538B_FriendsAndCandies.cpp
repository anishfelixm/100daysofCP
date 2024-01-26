#include<bits/stdc++.h>

int solve(std::vector<int> arr, int sum, int n){
    if (sum % n != 0){
        return -1;
    }
    sort(arr.begin(), arr.end());
    int mid = sum / n, k = 0, need = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] < mid){
            need += (mid - arr[i]);
        }
        else{
            break;
        }
    }
    for (int i = n-1; i > -1; i--){
        if (arr[i] > mid){
            need -= (arr[i] - mid);
            k++;
            if(need <= 0){
                return k;
            }
        }
        else{
            break;
        }
    }
    return 0;
}

int main(){
    int t, n, temp, sum;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        std::vector<int> arr;
        sum = 0;
        for(int j = 0; j < n; j++){
            std::cin>>temp;
            arr.push_back(temp);
            sum += temp;
        }
        ans.push_back(solve(arr, sum, n));
    }
    for(auto i : ans){
        std::cout<<i<<'\n';
    }
    return 0;
}