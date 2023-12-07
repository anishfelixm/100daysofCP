#include<bits/stdc++.h>

int main(){
    int n, k, temp, ans = 0;
    std::vector<int> scores;
    std::cin>>n>>k;
    for (int i = 0; i < n; i++){
        std::cin>> temp;
        scores.push_back(temp);
    }
    temp = scores[k-1];
    for(auto i : scores){
        if (i >= temp && i > 0){
            ans++;
        }
    }
    std::cout<<ans;
    return 0;
}