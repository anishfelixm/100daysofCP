#include<bits/stdc++.h>

int main(){
    int t, n, k, flag, temp;
    std::vector<std::string> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n>>k;
        flag = 0;
        for (int j = 0; j < n; j++){
            std::cin>>temp;
            if(temp == k){
                flag = 1;
            }
        }
        if(flag == 0){
            ans.push_back("NO");
        }
        else{
            ans.push_back("YES");
        }
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}