#include<bits/stdc++.h>

int main(){
    int t, w, h, n, cnt;
    std::vector<std::string> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>w>>h>>n;
        cnt = 1;
        while (cnt < n && (w % 2 == 0 || h % 2 == 0)){
            cnt *= 2;
            if (w % 2 == 0){
                w /= 2;
            }
            else if (h % 2 == 0){
                h /= 2;
            }
        }
        if (cnt >= n){
            ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}