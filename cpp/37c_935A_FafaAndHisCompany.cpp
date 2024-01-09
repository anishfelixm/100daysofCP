#include<bits/stdc++.h>

int main(){
    int n, cnt = 0;
    std::cin>>n;
    for (int i = 1; i <= (n / 2); i++){
        if ((n-i) % i == 0){
            cnt++;
        }
    }
    std::cout<<cnt;
    return 0;
}