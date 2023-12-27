#include<bits/stdc++.h>

int main(){
    std::vector<int> numbs;
    int temp, a, b, c;
    for (int i = 0; i < 4; i++){
        std::cin>>temp;
        numbs.push_back(temp);
    }
    sort(numbs.begin(), numbs.end());
    a = numbs[3] - numbs[0];
    b = numbs[3] - numbs[1];
    c = numbs[3] - numbs[2];
    std::cout<<a<<" "<<b<<" "<<c;
    return 0;
}