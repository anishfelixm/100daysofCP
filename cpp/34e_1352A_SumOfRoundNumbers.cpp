#include<bits/stdc++.h>

int main(){
    int t, j;
    std::string n;
    std::vector<std::string> numb;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        numb.push_back(n);
    }
    for(int i = 0; i < t; i++){
        std::vector<std::string> ans;
        j = numb[i].size() - 1;
        n = "";
        while(j >= 0){
            if(numb[i][j] != '0'){
                n += numb[i][j];
                for(int k = j; k< (numb[i].size() - 1); k++){
                    n += "0";
                }
                ans.push_back(n);
                n = "";
            }
            j--;
        }
        std::cout<<ans.size()<<"\n";
        for(auto i : ans){
            std::cout<<i<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}