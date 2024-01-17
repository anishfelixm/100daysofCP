#include<bits/stdc++.h>

int main(){
    std::string s, t;
    std::cin>>s;
    std::cin>>t;
    int cnt = 0;
    for(int i = 0; i < t.size(); i++){
        if(t[i] == s[cnt]){
            cnt++;
        }
    }
    std::cout<<(cnt+1);
    return 0;
}