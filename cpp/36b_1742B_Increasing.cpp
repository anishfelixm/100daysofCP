#include<bits/stdc++.h>

int main(){
    int t, n, temp, flag;
    std::vector<std::string> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        std::unordered_set<int> hset;
        flag = 0;
        for(int j = 0; j < n; j++){
            std::cin>>temp;
            if(hset.find(temp) != hset.end()){
                flag = 1;
            }
            hset.insert(temp);
        }
        if(flag == 0){
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