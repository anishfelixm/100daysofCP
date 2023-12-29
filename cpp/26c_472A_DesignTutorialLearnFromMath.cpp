#include<bits/stdc++.h>

bool iscomposite(int a){
    for(int i = 2; i < a; i++){
        if(a % i == 0){
            return true;
        }
    }
    return false;
}

int main(){
    int n, x, y;
    std::cin>>n;
    for(x = 4; x < n; x++){
        if (iscomposite(x)){
            y = n - x;
            if(iscomposite(y)){
                break;
            }
        }
    }
    std::cout<<x<<" "<<y;
    return 0;
}