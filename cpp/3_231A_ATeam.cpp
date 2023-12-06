#include<bits/stdc++.h>

int main(){
    int n, ans = 0;
    std::cin>>n;
    for(int i = 0; i<n; i++){
        int sum = 0, k;
        for(int j  = 0; j < 3; j++){
            std::cin>>k;
            sum += k;
        }
        if (sum > 1){
            ans += 1;
        }
    }
    std::cout<<ans;
    return 0;
}