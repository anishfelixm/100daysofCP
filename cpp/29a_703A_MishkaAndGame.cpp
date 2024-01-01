#include<bits/stdc++.h>

int main(){
    int n, m, c, m_cnt = 0, c_cnt = 0;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>m>>c;
        if(m > c){
            m_cnt++;
        }
        else if(c > m){
            c_cnt++;
        }
    }
    if(m_cnt > c_cnt){
        std::cout<<"Mishka";
    }
    else if(m_cnt < c_cnt){
        std::cout<<"Chris";
    }
    else{
        std::cout<<"Friendship is magic!^^";
    }
    return 0;
}