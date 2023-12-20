#include<bits/stdc++.h>

int main(){
    int n;
    std::vector<float> drinks;
    float per, temp;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>temp;
        drinks.push_back(temp);
        per += temp;
    }
    per = (per / (n * 100.0)) * 100.0;
    std::cout<<per;
    return 0;
}