#include<bits/stdc++.h>

int main(){
    unsigned long long n, temp, cnt = 0, check, flag = 0;
    std::cin>>n;
    temp = n;
    while (temp > 0){
        check = temp % 10;
        temp /= 10;
        if (check == 4 || check == 7){
            cnt ++;
        }
    }
    temp = cnt;
    if (temp == 0){
        flag = 1;
    }
    while(temp > 0){
        check = temp % 10;
        temp /= 10;
        if(check != 4 && check != 7){
            flag = 1;
            break;
        }
    }
    if (flag == 0){
        std::cout<<"YES";
    }
    else{
        std::cout<<"NO";
    }
    return 0;
}