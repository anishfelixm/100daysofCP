#include<bits/stdc++.h>

int main(){
    int n, cnt, h;
    std::cin>>n;
    cnt = 0, h = 0;
    while(cnt <= n){
        h++;
        cnt = cnt + ((h * (h + 1)) / 2);
    }
    h--;
    std::cout<<h;
    return 0;
}