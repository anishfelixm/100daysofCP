#include<bits/stdc++.h>

int main(){
    int t, flag;
    std::vector<std::string> ans;
    std::string s;
    char c;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>s;
        std::cin>>c;
        flag = 0;
        if(s.size() == 1){
            if(s[0] == c){
                flag = 1;
            }
            else{
                flag = 0;
            }
        }
        else if(s.size() == 2){
            flag = 0;
        }
        else{
            for(int j = 0; j < s.size(); j++){
                if (s[j] == c && j  % 2 == 0){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0){
            ans.push_back("NO");
        }
        else{
            ans.push_back("YES");
        }
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}