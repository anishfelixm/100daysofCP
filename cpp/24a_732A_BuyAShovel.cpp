#include<bits/stdc++.h>

int main(){
    int k, r, temp;
    std::cin>>k>>r;
    temp = k % 10;
    for(int i = 1; i <= 9; i++){
        if ((temp * i) % 10 == r || (temp * i) % 10 == 0){
            std::cout<<i;
            return 0;
        }
    }
    return 0;
}