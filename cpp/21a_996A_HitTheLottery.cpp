#include<bits/stdc++.h>

int main(){
    int n, cnt = 0, temp;
    std::cin>>n;
    temp = n;
    while(temp > 0){
        if(temp - 100 >= 0){
            temp -= 100;
            cnt++;
        }
        else if(temp - 20 >= 0){
            temp -= 20;
            cnt++;
        }
        else if(temp - 10 >= 0){
            temp -= 10;
            cnt++;
        }
        else if(temp - 5 >= 0){
            temp -= 5;
            cnt++;
        }
        else if(temp - 1 >= 0){
            temp -= 1;
            cnt ++;
        }
    }
    std::cout<<cnt;
    return 0;
}