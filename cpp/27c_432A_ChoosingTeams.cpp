#include<bits/stdc++.h>

int main(){
    int n, k, temp;
    std::map<int,int> participation;
    participation[0] = 0;
    participation[1] = 0;
    participation[2] = 0;
    participation[3] = 0;
    participation[4] = 0;
    participation[5] = 0;
    std::cin>>n>>k;
    for(int i = 0; i < n; i++){
        std::cin>>temp;
        for(int j = (5 - temp); j >= 0; j--){
            participation[j] ++;
        }
    }
    std::cout<<(participation[k] / 3);
    return 0;
}