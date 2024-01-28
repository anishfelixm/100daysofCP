#include<bits/stdc++.h>

int solve(std::string s){
    int start = -1, cnt = 0;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == '0' && s[i - 1] == '1'){
            start = i;
        }
        else if(s[i] == '1' && s[i-1] == '0'){
            if(start != -1){
                cnt += (i - start);
                start = -1;
            }
        }
    }
    return cnt;
}

int main(){
    int t;
    std::string s;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>s;
        ans.push_back(solve(s));
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}