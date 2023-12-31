#include<bits/stdc++.h>

int main(){
    int t, k, cnt, jump;
    std::cin>>t;
    std::vector<int> ans;
    for(int i = 0; i < t; i++){
        std::cin>>k;
        cnt = 0, jump = 1;
        while(jump <= k){
            cnt++;
            while((cnt % 3) == 0 || (cnt % 10) == 3){
                cnt++;
            }
            jump++;
        }
        ans.push_back(cnt);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}