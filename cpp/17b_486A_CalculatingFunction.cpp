#include<bits/stdc++.h>

int main(){
    long long n, c, se, so;
    long long ans = 0;
    std::cin>>n;
    if (n % 2 == 0){
        c = ((n - 2) / 2 ) + 1;
        se = (c) * ((2 + n ) / 2);
        so = (c) * ((-n) / 2);
        std::cout<<(so + se);
    }
    else{
        c = ((n - 1) / 2 ) + 1;
        se = (c - 1) * ((2 + n - 1) / 2);
        so = (c ) * ((-1 - n) / 2);
        ans = so + se;
        std::cout<<ans;
    }
    return 0;
}