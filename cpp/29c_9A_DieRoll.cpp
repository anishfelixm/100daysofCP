#include<bits/stdc++.h>

int main(){
    int y, w, num, den;
    std::cin>>y>>w;
    num = std::max(y, w);
    switch(num){
        case 6 : num = 1, den = 6;
                break;
        case 5 : num = 1, den = 3;
                break;
        case 4 : num = 1, den = 2;
                break;
        case 3 : num = 2, den = 3;
                break;
        case 2 : num = 5, den = 6;
                break;
        case 1 : num = 1, den = 1;
                break;
    }
    std::cout<<num<<"/"<<den;
    return 0;
}