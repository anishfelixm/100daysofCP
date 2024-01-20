#include<bits/stdc++.h>

int solve(int n){
    int k =  n - (n % 10), chk1 = 0, chk2 = 0;
    for(int i = 0; i < 10; i++){
        if ((k + i) % 7 == 0){
            if(chk1 == 0){
                chk1 = k+i;
            }
            else{
                chk2 = k+i;
            }
        }
        //std::cout<<k+i<<" "<<chk1<<" "<<chk2<<"\n";
    }
    if(abs(chk1 - n) > abs(chk2 - n)){
        return chk2;
    }
    else{
        return chk1;
    }
    return -1;
}

int main(){
    int t, n;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        ans.push_back(solve(n));
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}