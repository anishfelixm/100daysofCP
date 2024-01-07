#include<bits/stdc++.h>

int main(){
    int t, cnt;
    std::vector<std::string> ans;
    std::unordered_map<char, int> hmap;
    hmap['a'] = 0;
    hmap['b'] = 1;
    hmap['c'] = 2;
    std::string str;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>str;
        cnt = 0;
        for(int j = 0; j < 3; j++){
            if(hmap[str[j]] != j){
                cnt++;
            }
        }
        if (cnt <= 2){
            ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}