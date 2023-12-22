#include<bits/stdc++.h>

int main(){
    int n, temp, big = 0, small = 101, big_id = 0, small_id = 0, ans;
    std::vector<int> soldiers;
    std::cin>>n;
    for (int i = 0; i < n; i++){
        std::cin>>temp;
        soldiers.push_back(temp);
        if(temp > big){
            big = temp;
            big_id = i;
        }
        if (temp <= small){
            small = temp;
            small_id = i;
        }
    }
    ans = abs(0 - big_id) + abs(n-1 - small_id);
    if (small_id < big_id){
        ans --;
    }
    std::cout<<ans;
    return 0;
}