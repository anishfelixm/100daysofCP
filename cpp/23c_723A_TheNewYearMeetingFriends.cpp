#include<bits/stdc++.h>

int main(){
    std::vector<int> dist;
    int temp;
    for(int i = 0; i < 3; i++){
        std::cin>>temp;
        dist.push_back(temp);
    }
    sort(dist.begin(),dist.end());
    int ans = (dist[1] - dist[0]) + (dist[2] - dist[1]);
    std::cout<<ans;
    return 0;
}