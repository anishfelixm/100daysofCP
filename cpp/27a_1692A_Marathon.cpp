#include<bits/stdc++.h>

int main(){
    int t, a, b, c, d, cnt;
    std::vector<int> count;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        cnt = 0;
        std::cin>>a>>b>>c>>d;
        if(b > a){
            cnt++;
        }
        if(c > a){
            cnt++;
        }
        if(d > a){
            cnt++;
        }
        count.push_back(cnt);
    }
    for(auto i : count){
        std::cout<<i<<"\n";
    }
    return 0;
}