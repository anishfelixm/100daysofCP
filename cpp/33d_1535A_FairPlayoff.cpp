#include<bits/stdc++.h>

int main(){
    int t, s1, s2, s3, s4;
    std::vector<std::string> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>s1>>s2>>s3>>s4;
        if ((s1 > s3 && s1 > s4) && (s2 > s3 && s2 > s4)){
            ans.push_back("NO");
        }
        else if ((s3 > s1 && s3 > s2) && (s4 > s1 && s4 > s2)){
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