#include<bits/stdc++.h>

bool isprime(int a){
    for(int i = 2; i < ((a / 2) + 1); i++){
        if(a % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n, m;
    std::cin>>n>>m;
    if(!isprime(m)){
        std::cout<<"NO";
    }
    else{
        int flag = 0;
        for(int i = n + 1; i < m; i++){
            if(isprime(i)){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            std::cout<<"YES";
        }
        else{
            std::cout<<"NO";
        }
    }
    return 0;
}