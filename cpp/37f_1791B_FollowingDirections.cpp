#include<bits/stdc++.h>

int main(){
    int t, n, x, y, flag;
    std::string s;
    std::vector<std::string> ans;
    std::unordered_map<char, int> hmapx, hmapy;
    hmapx['L'] = -1, hmapx['R'] = 1, hmapx['U'] = 0, hmapx['D'] = 0;
    hmapy['L'] = 0, hmapy['R'] = 0, hmapy['U'] = 1, hmapy['D'] = -1;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        std::cin>>s;
        x = 0, y = 0, flag = 0;
        for (auto j : s){
            x += hmapx[j];
            y += hmapy[j];
            if (x == 1 && y == 1){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            ans.push_back("NO");
        }
        else{
            ans.push_back("YES");
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}