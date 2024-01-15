#include<bits/stdc++.h>

int main(){
    int t, a, b, c, d, x, y, z, flag;
    std::vector<std::vector<int>> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>a>>b>>c>>d;
        x = a, y = c, z = c;
        ans.push_back({x, y, z});
    }
    for(int i = 0; i < t; i++){
        std::cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<"\n";
    }
    return 0;
}