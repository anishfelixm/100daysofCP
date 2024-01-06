#include<bits/stdc++.h>

int main(){
    int n, m, flag = 0;
    char pix;
    std::cin>>n>>m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            std::cin>>pix;
            if(pix != 'B' && pix != 'W' && pix != 'G'){
                flag = 1;
            }
        }
    }
    if(flag == 0){
        std::cout<<"#Black&White";
    }
    else{
        std::cout<<"#Color";
    }
    return 0;
}