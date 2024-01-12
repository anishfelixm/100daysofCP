#include<bits/stdc++.h>

int main(){
    int t, a, b, c, cnt1, cnt2;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>a>>b>>c;
        cnt1 = abs(a - 1);
        cnt2 = abs(c - b) + abs(c - 1);
        if (cnt1 < cnt2){
            ans.push_back(1);
        }
        else if(cnt1 > cnt2){
            ans.push_back(2);
        }
        else{
            ans.push_back(3);
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}