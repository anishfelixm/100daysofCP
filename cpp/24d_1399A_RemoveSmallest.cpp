#include<bits/stdc++.h>

int main(){
    int t, n, temp, cnt = 0;
    std::vector<std::string> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::unordered_set<int> hset;
        cnt = 0;
        std::cin>>n;
        for(int i = 0; i < n; i++){
            std::cin>>temp;
            hset.insert(temp);
        }
        for(auto i : hset){
            if(hset.find(i-1) == hset.end()){
                cnt++;
            }
        }
        if(cnt == 1){
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