#include<bits/stdc++.h>

int main(){
    int n, cnt = 0;
    std::string s;
    std::cin>>n;
    std::cin>>s;
    for(int i = 2; i < n; i++){
        if(s[i] == 'x' && s[i-1] == 'x' && s[i-2] == 'x'){
            cnt++;
        }
    }
    std::cout<<cnt;
    return 0;
}