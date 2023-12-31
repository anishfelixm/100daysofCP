#include<bits/stdc++.h>

int main(){
    int t, j;
    std::string b, temp;
    std::vector<std::string> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>b;
        temp = "", j = 0;
        while (j < b.size()){
            temp += b[j];
            j += 2;
        }
        j--;
        temp += b[j];
        ans.push_back(temp);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}