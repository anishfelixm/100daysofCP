#include<bits/stdc++.h>

int main(){
    int a, b, dif_sock, same_sock;
    std::cin>>a>>b;
    dif_sock = std::min(a,b);
    same_sock = (std::max(a,b) - dif_sock) / 2;
    std::cout<<dif_sock<<" "<<same_sock;
    return 0;
}