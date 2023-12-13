#include<bits/stdc++.h>

int main(){
    int n, cnt = 0;
    std::string s;
    std::cin>>n;
    std::cin>>s;
    if (n == 1){
        std::cout<<0;
        return 0;
    }
    for (int i = 1; i < n; i++){
        if(s[i-1] == s[i]){
            cnt++;
        }
    }
    std::cout<<cnt;
    return 0;
}