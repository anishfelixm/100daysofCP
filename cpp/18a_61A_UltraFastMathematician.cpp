#include<bits/stdc++.h>

int main(){
    std::string s1, s2;
    std::cin>>s1>>s2;
    std::vector<int> no1, no2, ans;
    for(int i = 0; i < s1.size(); i++){
        if( s1[i] == '0'){
            no1.push_back(0);
        }
        else{
            no1.push_back(1);
        }
        if (s2[i] == '0'){
            no2.push_back(0);
        }
        else{
            no2.push_back(1);
        }
        ans.push_back(no1[i] ^ no2[i]);
    }
    for(auto i : ans){
        std::cout<<i;
    }
    return 0;
}