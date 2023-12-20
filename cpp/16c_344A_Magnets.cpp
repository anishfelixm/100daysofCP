#include<bits/stdc++.h>

int get_pole(std::string s){
    if ( s[0] == '0'){
        return 0;
    } 
    return 1;
}

int main(){
    int n, prev, next, grp = 0;
    std::string temp;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>temp;
        if (i == 0){
            prev = get_pole(temp);
            continue;
        }
        next = get_pole(temp);
        if (next == prev){
            prev = next;
        }
        else{
            grp++;
            prev = next;
        }
    }
    grp++;
    std::cout<<grp;
    return 0;
}