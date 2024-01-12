#include<bits/stdc++.h>

int main(){
    int t, j, n;
    std::string s;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        std::cin>>s;
        j = 0;
        while (j < (n / 2)){
            if((s[j] == '0' && s[n-1-j] == '0') || (s[j] == '1' && s[n-1-j] == '1')){
                break;
            }
            j++;
        }
        ans.push_back(n - 1 - j - j + 1);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}