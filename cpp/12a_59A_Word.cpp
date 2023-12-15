#include<bits/stdc++.h>

int main(){
    std::string s;
    std::cin>>s;
    int upper = 0, lower = 0;
    for(auto i : s){
        if(isupper(i)){
            upper ++;
        }
        else{
            lower ++;
        }
    }
    if (upper > lower){
        for (auto &i : s){
            i = toupper(i);
        }
    }
    else{
        for(auto &i : s){
            i = tolower(i);
        }
    }
    std::cout<<s;
    return 0;
}