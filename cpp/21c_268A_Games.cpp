#include<bits/stdc++.h>

int main(){
    int n, h, a, cnt = 0;
    std::vector<std::vector<int>> uniforms;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>h>>a;
        uniforms.push_back({h,a});
    }
    for(int h = 0; h < n; h++){
        for(int a = 0; a < n; a++){
            if(a == h){
                continue;
            }
            if(uniforms[h][0] == uniforms[a][1]){
                cnt++;
            }
        }
    }
    std::cout<<cnt;
    return 0;
}