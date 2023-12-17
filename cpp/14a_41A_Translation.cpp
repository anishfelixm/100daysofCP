#include<bits/stdc++.h>

int main(){
    std::string s, t, temp;
    std::cin>>s>>t;
    temp = s;
    reverse(s.begin(), s.end());
    if (s.compare(t)){
        std::cout<<"NO";
    }
    else{
        std::cout<<"YES";
    }
    return 0;
}