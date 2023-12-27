#include<bits/stdc++.h>

int main(){
    int n, k, l, c, d, p, nl, np, toasts;
    std::cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    toasts = (std::min((c * d),std::min((p / np), ((k * l) / nl)))) / n;
    std::cout<<toasts;
    return 0;
}