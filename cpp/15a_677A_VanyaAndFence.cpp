#include<bits/stdc++.h>

int main(){
    int n, h, temp, w = 0;
    std::cin>>n>>h;
    std::vector<int> a;
    for (int i = 0; i < n; i++){
        std::cin>>temp;
        a.push_back(temp);
        if(temp <= h){
            w++;
        }
        else{
            w += 2;
        }
    }
    std::cout<<w;
    return 0;
}