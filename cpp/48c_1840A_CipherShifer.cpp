#include<bits/stdc++.h>

std::string solve(std::string s, int n){
    std::string sol = "";
    sol += s[0];
    char prev = s[0];
    for(int i = 1; i < (n-1); i++){
        if (s[i] == prev){
            sol += s[i+1];
            prev = s[i+1];
            i++;
        }
        //std::cout<<sol<<" "<<prev<<"\n";
    }
    return sol;
}

int main(){
    int t, n;
    std::string s;
    std::vector<std::string> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        std::cin>>s;
        ans.push_back(solve(s, n));
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}