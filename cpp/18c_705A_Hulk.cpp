#include<bits/stdc++.h>

int main(){
    std::string s1 = "I hate", s2 = "I love", ans = "";
    int n;
    std::cin>>n;
    for(int i = 1; i <= n; i++){
        if (i % 2 != 0){
            ans += s1 + " ";
        }
        else{
            ans += s2 + " ";
        }
        if(i != n){
            ans += "that ";
        }
    }
    ans += "it";
    std::cout<<ans;
    return 0;
}