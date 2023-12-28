#include<bits/stdc++.h>

int main(){
    int t;
    std::string temp;
    std::vector<std::string> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>temp;
        for (int i = 0; i < 3; i++){
            temp[i] = tolower(temp[i]);
        }
        if(temp.compare("yes")){
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