#include<bits/stdc++.h>

int main(){
    int t;
    char temp;
    std::unordered_set<char> hset ({'c','o','d','e','f','o','r','c','e','s'});
    std::vector<std::string> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>temp;
        if(hset.find(temp) != hset.end()){
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