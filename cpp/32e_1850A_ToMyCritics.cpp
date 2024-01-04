#include<bits/stdc++.h>

int main(){
    int t, a, b, c, sum;
    std::vector<std::string> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>a>>b>>c;
        sum = 0;
        sum = a + b + c;
        if(sum - a >= 10){
            ans.push_back("YES");
        }
        else if(sum - b >= 10){
            ans.push_back("YES");
        }
        else if (sum - c >= 10){
            ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}