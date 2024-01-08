#include<bits/stdc++.h>

int main(){
    int t, cnt;
    std::vector<int> ans;
    std::string s, check = "codeforces";
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>s;
        cnt = 0;
        for(int j = 0; j < 10; j++){
            if (s[j] != check[j]){
                cnt++;
            }
        }
        ans.push_back(cnt);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}