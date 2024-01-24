#include<bits/stdc++.h>

int main(){
    int t, n;
    long long cnt, chk, temp;
    std::vector<std::string> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        cnt = 0;
        for (int j = 0; j < n; j++){
            std::cin>>temp;
            cnt += temp;
        }
        //std::cout<<cnt;
        chk = floor(sqrt(cnt));
        //std::cout<<chk<<"\n";
        chk = chk * chk;
        //std::cout<<chk<<"\n";
        if (chk == cnt){
            ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}