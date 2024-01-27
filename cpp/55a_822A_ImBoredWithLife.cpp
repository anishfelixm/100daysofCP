#include<bits/stdc++.h>

int fact(int a){
    int cnt = 1;
    for(int i = 1; i <= a; i++){
        cnt *= i;
    }
    return cnt;
}

int solve(int a, int b){
    return fact(std::min(a, b));
}

int main(){
    int a, b;
    std::cin>>a>>b;
    std::cout<<solve(a, b);
    return 0;
}