#include<bits/stdc++.h>

int main(){
    unsigned long long n, x, d, cnt = 0;
    char sym;
    std::cin>>n>>x;
    for (int i = 0; i < n; i++){
        std::cin>>sym>>d;
        if(sym == '+'){
            x += d;
        }
        else{
            if(x >= d){
                x -=d;
            }
            else{
                cnt ++;
            }
        }
    }
    std::cout<<x<<" "<<cnt;
    return 0;
}