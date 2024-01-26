#include<bits/stdc++.h>

std::string solve(int a, int b, int c, int x, int y){
    if(x + y > a + b + c){
        return "NO";
    }
    x = x - a;
    if(x <= 0){
        if(b + c >= y){
            return "YES";
        }
        else{
            return "NO";
        }
    }
    else{
        c = c - x;
        if (c < 0){
            return "NO";
        }
        else{
            if(b + c >= y){
                return "YES";
            }
            else{
                return "NO";
            }
        }
    }
}

int main(){
    int t, a, b, c, x, y;
    std::vector<std::string> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>a>>b>>c>>x>>y;
        ans.push_back(solve(a,b,c,x,y));
    }
    for (auto i : ans){
        std::cout<<i<<'\n';
    }
    return 0;
}