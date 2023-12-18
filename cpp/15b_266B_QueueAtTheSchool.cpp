#include<bits/stdc++.h>

int main(){
    int n, t;
    std::cin>>n>>t;
    std::string s;
    std::cin>>s;
    while(t--){
        for (int i = 1; i < n; i++){
            if(s[i - 1] == 'B' && s[i] == 'G'){
                s[i - 1] = 'G';
                s[i] = 'B';
                i++;
            }
        }
    }
    std::cout<<s;
    return 0;
}