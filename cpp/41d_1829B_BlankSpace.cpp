#include<bits/stdc++.h>

int main(){
    int t, n, temp, pos, cnt, j;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        pos = 0, cnt = 0, j = 0;
        for(j = 0; j < n; j++){
            std::cin>>temp;
            if (temp == 0){
                cnt = std::max(cnt, j - pos + 1);
            }
            else{
                pos = j + 1;
            }
        }
        ans.push_back(cnt);
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}