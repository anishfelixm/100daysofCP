#include<bits/stdc++.h>

int main(){
    int n, b, a, count = 0, ans = 0;
    std::vector<std::vector<int>> stops;
    std::cin>>n;
    for (int i = 0; i < n; i++){
        std::cin>>b>>a;
        stops.push_back({b,a});
        count = count - b + a;
        ans = std::max(ans, count);
    }
    std::cout<<ans;
    return 0;
}