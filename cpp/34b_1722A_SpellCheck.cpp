#include<bits/stdc++.h>

int main(){
    int t, n, flag;
    std::string s;
    std::vector<std::string> ans;
    std::unordered_map<char, int> check;
    check['T'] = 1;
    check['i'] = 1;
    check['m'] = 1;
    check['u'] = 1;
    check['r'] = 1;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        std::cin>>s;
        std::unordered_map<char, int> hmap;
        for (auto i : s){
            hmap[i] ++;
        }
        flag = 0;
        for(auto i = check.begin(); i != check.end(); i++){
            if(i->second != hmap[i->first]){
                flag = 1;
            }
        }
        if(check.size() != hmap.size()){
            flag = 1;
        }
        if(flag == 0){
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