#include<bits/stdc++.h>

int main(){
    int n, x = 0;
    std::string temp;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>temp;
        if(temp.substr(0,2) == "++" || temp.substr(1,2) == "++"){
            x++;
        }
        else if (temp.substr(0,2) == "--" || temp.substr(1,2) == "--"){
            x--;
        }
    }
    std::cout<<x;
    return 0;
}