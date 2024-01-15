#include<bits/stdc++.h>

int main(){
    int t, cnt;
    std::vector<int> ans;
    std::string s, k;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>k;
        std::cin>>s;
        std::unordered_map<char,int> hmap;
        for(int j = 0; j < k.size(); j++){
            hmap[k[j]] = j;
        }
        cnt = 0;
        for(int j = 1; j < s.size(); j++){
            cnt += abs((hmap[s[j]] - hmap[s[j-1]]));
        }
        ans.push_back(cnt);
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}