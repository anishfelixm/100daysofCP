#include<bits/stdc++.h>

int main(){
    int n, k, cnt = 0, time_used  = 0;
    std::cin>>n>>k;
    for(int t = 1; t <= n; t++){
        if(time_used + 5 * t + k > 240){
            break;
        }
        time_used += (5 * t);
        cnt++;
    }
    std::cout<<cnt;
    return 0;
}