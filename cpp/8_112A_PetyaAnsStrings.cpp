#include<bits/stdc++.h>

int main(){
    std::string s1, s2;
    std::cin>>s1>>s2;
    for(auto& i : s1){
        i = tolower(i);
    }
    for(auto& i : s2){
        i = tolower(i);
    }
    int comp = s1.compare(s2);
    std::cout<<comp;
    return 0;
}