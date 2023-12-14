#include<bits/stdc++.h>

int main(){
    int a, b;
    std::cin>>a>>b;
    int ans = 0;
    while(a <= b){
        ans ++;
        a = 3 * a;
        b = 2 * b;
    }
    std::cout<<ans;
    return 0;
}