#include<bits/stdc++.h>

int main(){
    std::vector<std::string> ans;
    int temp, t;
    std::cin>>t;
    for(int j = 0; j < t; j++){
        std::vector<int> numbs;    
        for(int i = 0; i < 3; i++){
            std::cin>>temp;
            numbs.push_back(temp);
        }
        sort(numbs.begin(), numbs.end());
        if(numbs[0] + numbs[1] == numbs[2]){
            ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;   
}