#include<bits/stdc++.h>
int solve(std::string s, int n, int k){
    int cnt = 0, i = 0;
    while (i < n){
        if(s[i] == 'B'){
            cnt++;
            i = i + k;
        }
        else{
            i++;
        }
    }
    return cnt;
}

int main(){
    int t, n, k;
    std::string s;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n>>k;
        std::cin>>s;
        ans.push_back(solve(s, n, k));
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}