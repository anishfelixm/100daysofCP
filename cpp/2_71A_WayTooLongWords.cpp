#include<iostream>
#include<vector>
#include<string>

int main(){
    int n;
    std::cin>>n;
    std::vector<std::string>strings;
    for(int i = 0; i < n; i++){
        std::string temp;
        std::cin>>temp;
        strings.push_back(temp);
    }
    for(int i = 0; i < n; i++){
        std::string temp;
        if(strings[i].size() > 10){
            temp = strings[i][0] + std::to_string(strings[i].size()-2) + strings[i][strings[i].size()-1];
            strings[i] = temp;
        }
    }
    for(int i = 0; i < n; i++){
        std::cout<<strings[i]<<std::endl;
    }
    return 0;
}