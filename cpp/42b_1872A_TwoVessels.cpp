#include<bits/stdc++.h>

int main(){
    int t, a, b, c;
    float mid;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>a>>b>>c;
        mid = (a + b) / 2.0;
        //std::cout<<mid<<" "<<ceil(abs(a - mid) / c)<<" "<<ceil(abs(b - mid) / c)<<"\n"; 
        ans.push_back(std::min(ceil(abs(a - mid) / c), ceil(abs(b - mid) / c)));
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}