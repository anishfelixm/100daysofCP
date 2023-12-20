#include<bits/stdc++.h>

int main(){
    int n, p, q, cnt = 0;
    std::vector<std::vector<int>> dorms;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>p>>q;
        dorms.push_back({p,q});
        if(q - p >= 2){
            cnt++;
        }
    }
    std::cout<<cnt;
    return 0;
}