#include<bits/stdc++.h>

bool distinct(int year){
    std::unordered_map<int,int> hmap;
    int temp = year;
    while ( temp > 0){
        int check = temp % 10;
        temp /= 10;
        if(hmap.find(check) != hmap.end()){
            return false;
        }
        else{
            hmap[check]++;
        }
    }
    return true;
}

int main(){
    int y;
    std::cin>>y;
    for(int i = y + 1; i < 9013; i++){
        if (distinct(i)){
            std::cout<<i;
            break;
        }
    }
    return 0;
}