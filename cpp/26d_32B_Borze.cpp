#include<bits/stdc++.h>

int main(){
    std::string s, ans;
    std::cin>>s;
    int i = 0, n = s.size();
    while(i < n){
        if(s[i] == '.'){
            ans += "0";
        }
        else if(s[i] == '-'){
            i++;
            if(s[i] == '.'){
                ans += "1";
            }
            else{
                ans += "2";
            }
        }
        i++;
    }
    std::cout<<ans;
    return 0;
}