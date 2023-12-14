#include<bits/stdc++.h>

int main(){
    int x, pos = 0, steps = 0;
    std::cin>>x;
    while (pos < x){
        if (pos + 5 <= x){
            pos += 5;
            steps ++;
        }
        else if(pos + 4 <= x){
            pos += 4;
            steps++;
        }
        else if(pos + 3 <= x){
            pos += 3;
            steps ++;
        }
        else if (pos + 2 <= x){
            pos += 2;
            steps ++;
        }
        else{
            pos += 1;
            steps ++;
        }
    }
    std::cout<<steps;
    return 0;
}