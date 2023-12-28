#include<bits/stdc++.h>

int main(){
    int t, a, b, temp;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>a>>b;
        temp = (abs(a - b) / 10);
        if(abs(a - b) % 10 != 0){
            temp ++;
        }
        ans.push_back(temp);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}