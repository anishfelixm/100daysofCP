#include<bits/stdc++.h>

int main(){
    int n, temp, max = 0, sum = 0;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>temp;
        sum += temp;
        if(temp > max){
            max = temp;
        }
    }
    std::cout<<((max * n) - (sum));
    return 0;
}