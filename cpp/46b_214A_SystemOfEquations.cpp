#include<bits/stdc++.h>

int main(){
    int n, m, cnt = 0;
    std::cin>>n>>m;
    for(int  a = 0; a * a <= n; a++){
        for(int b = 0; b * b <= m; b++){
            if((a * a) + b == n && a + (b * b) == m){
                cnt++;
            }
        }
    }
    std::cout<<cnt;
    return 0;
}