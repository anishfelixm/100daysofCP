#include<bits/stdc++.h>

int main(){
    std::string tab_c, c1, c2, c3, c4, c5;
    std::cin>>tab_c;
    std::cin>>c1>>c2>>c3>>c4>>c5;
    char chck_r = tab_c[0], chck_s = tab_c[1];
    if(c1[0] == chck_r || c2[0] == chck_r || c3[0] == chck_r || c4[0] == chck_r || c5[0] == chck_r){
        std::cout<<"YES";
    }
    else if(c1[1] == chck_s || c2[1] == chck_s || c3[1] == chck_s || c4[1] == chck_s || c5[1] == chck_s){
        std::cout<<"YES";
    }
    else{
        std::cout<<"NO";
    }
    return 0;
}