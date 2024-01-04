#include<bits/stdc++.h>

int main(){
    int t, n , k, temp, sum;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n>>k;
        std::vector<int> a, b;
        sum = 0;
        for(int j = 0; j < n; j++){
            std::cin>>temp;
            a.push_back(temp);
        }
        for(int j = 0; j < n; j++){
            std::cin>>temp;
            b.push_back(temp);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        temp = 0;
        for(int j = 0; j < n; j++){
            if(temp < k && a[j] < b[n - 1 - temp]){
                a[j] = b[n - 1 - temp];
                temp ++;
            }
            sum += a[j];
        }
        ans.push_back(sum);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}