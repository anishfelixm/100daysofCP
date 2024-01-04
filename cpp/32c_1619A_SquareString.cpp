#include<bits/stdc++.h>

int main(){
    int t, n, flag;
    std::vector<std::string> ans;
    std::string temp;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>temp;
        n = temp.size();
        if(n % 2 != 0){
            ans.push_back("NO");
        }
        else{
            flag = 0;
            for(int j = 0; j < (n / 2); j++){
                if(temp[j] != temp[(n / 2) + j]){
                    ans.push_back("NO");
                    flag = 1;
                    break;
                }
            }
            if (flag == 0){
                ans.push_back("YES");
            }
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}