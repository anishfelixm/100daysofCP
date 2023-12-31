#include<bits/stdc++.h>

int main(){
    int t, n, m;
    std::vector<std::string> ans;
    std::string s;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>s;
        n = s[0] + s[1] + s[2];
        m = s[3] + s[4] + s[5];
        if (n == m){
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