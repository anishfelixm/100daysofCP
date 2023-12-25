#include<bits/stdc++.h>

int main(){
    int n, m;
    std::cin>>n>>m;
    std::vector<std::vector<char>> ans;
    for(int i = 0; i < n; i++){
        std::vector<char> nextline;
        for(int j = 0; j < m; j++){
            if (i % 2 == 0){
                nextline.push_back('#');
            }
            else if((i - 1) % 4 == 0){
                if(j == (m - 1)){
                    nextline.push_back('#');
                }
                else{
                    nextline.push_back('.');
                }
            }
            else{
                if(j == (0)){
                    nextline.push_back('#');
                }
                else{
                    nextline.push_back('.');
                }
            }
        }
        ans.push_back(nextline);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            std::cout<<ans[i][j];
        }
        std::cout<<"\n";
    }
    return 0;
}

// 1 5 9 13
// 3 7 11 15