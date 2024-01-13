#include<bits/stdc++.h>

int main(){
    int t, l, r, x, y, j;
    std::vector<std::vector<int>> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>l>>r;
        x = l, j = 2, y = -1;
        while((x * 2) <= r){
            if((x * j) <= r){
                y = (x * j);
                break;
            }
            else{
                x++;
            }
            j++;
        }
        if(y == -1){
            ans.push_back({-1,-1});
        }
        else{
            ans.push_back({x,y});
        }
    }
    for (auto i : ans){
        std::cout<<i[0]<<" "<<i[1]<<"\n";
    }
    return 0;
}