#include<bits/stdc++.h>

int main(){
    int t, n, cnt, temp, no_of_odd;
    std::vector<std::string> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        cnt = 0, no_of_odd = 0;
        for (int j = 0; j < n; j++){
            std::cin>>temp;
            cnt += temp;
            if(temp % 2 != 0){
                no_of_odd++;
            }
        }
        if (no_of_odd == 0){
            ans.push_back("NO");
        }
        else{
            if(cnt % 2 == 0 && no_of_odd == n){
                ans.push_back("NO");
            }
            else{
                ans.push_back("YES");
            }
        }
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}