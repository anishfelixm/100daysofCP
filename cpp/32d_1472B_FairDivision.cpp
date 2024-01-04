#include<bits/stdc++.h>

int main(){
    int t, n, a, no_of_1, no_of_2;
    std::vector<std::string> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        no_of_1 = 0;
        no_of_2 = 0;
        for (int j = 0; j < n; j++){
            std::cin>>a;
            if(a % 2 == 0){
                no_of_2 ++;
            }
            else{
                no_of_1 ++;
            }
        }
        if(no_of_1 % 2 != 0){
            ans.push_back("NO");
        }
        else{
            if(no_of_1 == 0){
                if(no_of_2 % 2 == 0){
                    ans.push_back("YES");
                }
                else{
                    ans.push_back("NO");
                }
            }
            else{
                ans.push_back("YES");
            }
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}