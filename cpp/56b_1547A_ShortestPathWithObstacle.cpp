#include<bits/stdc++.h>

int solve(int xa, int ya, int xb, int yb, int xf, int yf){
    if(abs(xa - xb) == 0 && xf == xa && std::min(ya, yb) < yf && std::max(ya, yb) > yf){
        return abs(xa - xb) + abs(ya - yb) + 2;
    }
    else if (abs(ya - yb) == 0 && yf == ya && std::min(xa, xb) < xf && std::max(xa, xb) > xf){
        return abs(xa - xb) + abs(ya - yb) + 2;
    }
    else
        return abs(xa - xb) + abs(ya - yb);
}

int main(){
    int t, xa, xb, xf, ya, yb, yf;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>xa>>ya;
        std::cin>>xb>>yb;
        std::cin>>xf>>yf;
        ans.push_back(solve(xa, ya, xb, yb, xf, yf));
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}