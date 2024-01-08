#include<bits/stdc++.h>

int main(){
    std::string s;
    std::cin>>s;
    int cnt = 0, clk, aclk1, aclk2, aclk;
    char prev = 'a';
    for(auto i :s){
        clk = abs(prev - i);
        aclk1 = abs('z' - i) + 1 + abs(prev - 'a');
        aclk2 = abs('z' - prev) + 1 + abs(i - 'a');
        aclk = std::min(aclk1, aclk2);
        cnt += std::min(clk, aclk);
        prev = i;
    }
    std::cout<<cnt;
    return 0;
}