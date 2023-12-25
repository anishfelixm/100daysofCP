#include<bits/stdc++.h>

int main(){
    int n, cnt = 0, police_rem = 0, temp;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>temp;
        if (temp == -1){
            if (police_rem < 1){
                cnt++;
            }
            else{
                police_rem--;
            }
        }
        else{
            police_rem += temp;
        }
    }
    std::cout<<cnt;
    return 0;
}