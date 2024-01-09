#include<bits/stdc++.h>

int main(){
    int t, a, b, x;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>a>>b;
        x = b - a;
        if (x > 0){
            if (x % 2 != 0){
                ans.push_back(1);
            }
            else{
                ans.push_back(2);
            }
        }
        else if(x < 0){
            if (x % 2 == 0){
                ans.push_back(1);
            }
            else{
                ans.push_back(2);
            }
        }
        else{
            ans.push_back(0);
        }
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}