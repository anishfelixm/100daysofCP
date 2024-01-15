#include<bits/stdc++.h>

int main(){
    int t, cnt;
    std::vector<int> ans;
    std::string pi, pi_chck = "314159265358979323846264338327";
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>pi;
        cnt = 0;
        for(int j = 0; j < 30; j++){
            if(pi[j] == pi_chck[j]){
                cnt++;
            }
            else{
                break;
            }
        }
        ans.push_back(cnt);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}