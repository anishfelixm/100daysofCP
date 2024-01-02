#include<bits/stdc++.h>

int main(){
    int t, n, j, flag;
    char temp;
    std::string s;
    std::vector<std::string> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        std::cin>>s;
        std::unordered_set<char> hset;
        j = 0, flag = 0;
        while(j < n){
            if(hset.find(s[j]) != hset.end()){
                ans.push_back("NO");
                flag = 1;
                break;
            }
            else{
                hset.insert(s[j]);
                temp = s[j];
                while(j + 1 < n && s[j + 1] == temp){
                    j++;
                }
            }
            j++;
        }
        if(flag == 0){
            ans.push_back("YES");
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}