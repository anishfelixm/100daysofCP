#include<bits/stdc++.h>

int main(){
    int n, k;
    std::vector<int> ans;
    std::cin>>n;
    if (n % 2 == 0){
        k = (n / 2);
        for (int i = 0; i < k; i++){
            ans.push_back(2);
        }
    }
    else{
        k = (n / 2);
        for(int i = 0; i < (k - 1); i++){
            ans.push_back(2);
        }
        ans.push_back(3);
    }
    std::cout<<k<<"\n";
    for(int i = 0; i < k; i++){
        std::cout<<ans[i]<<" ";
    }
    return 0;
}