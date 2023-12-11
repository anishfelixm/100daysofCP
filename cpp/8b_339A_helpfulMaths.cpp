#include<bits/stdc++.h>

int main(){
    std::string input;
    std::cin>>input;
    std::vector<int> numbers;
    for(auto i : input){
        if (isdigit(i)){
            numbers.push_back(i - 48);
        }
    }
    sort(numbers.begin(), numbers.end());
    for(int i = 0; i < (numbers.size() - 1); i++){
        std::cout<<numbers[i]<<"+";
    }
    std::cout<<numbers[numbers.size()-1];
    return 0;
}