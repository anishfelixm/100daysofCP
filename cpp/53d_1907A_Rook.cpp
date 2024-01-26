#include<bits/stdc++.h>

std::vector<std::string> solve(std::string pos){
    std::vector<std::string> ret_ans;
    char row = pos[1];
    char col = pos[0];
    std::string nxt;
    // std::cout<<row<<" "<<col<<"\n";
    for(int i = 1; i <= 8; i++){
        if('a' + (i-1) != col){
            nxt = ('a' + (i-1));
            nxt += row;
            ret_ans.push_back(nxt);
        }
    }
    for(int i = 1; i <= 8; i++){
        if('0' + i != row){
            nxt = col;
            nxt += ('0' + i);
            ret_ans.push_back(nxt);
        }
    }
    return ret_ans;
}

int main(){
    int t;
    std::vector<std::vector<std::string>> ans;
    std::string pos;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>pos;
        ans.push_back(solve(pos));
    }
    for (auto i : ans){
        for (auto j : i){
            std::cout<<j<<'\n';
        }
    }
    return 0;
}