#include<bits/stdc++.h>

int main(){
    int n, temp;
    std::vector<int> replies;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>temp;
        replies.push_back(temp);
        if (temp == 1){
            std::cout<<"HARD";
            return 0;
        }
    }
    std::cout<<"EASY";
    return 0;
}