#include<bits/stdc++.h>

std::vector<int> solve(int n){
    std::vector<int> temp;
    if (n % 3 == 0){
        temp.push_back(n / 3);
        temp.push_back((n / 3) + 1);
        temp.push_back((n / 3) - 1);
    }
    else if (n % 3 == 1){
        temp.push_back((n / 3) + 1);
        temp.push_back((n / 3) + 2);
        temp.push_back((n / 3) - 2);
    }
    else{
        temp.push_back((n / 3) + 1);
        temp.push_back((n / 3) + 2);
        temp.push_back((n / 3) - 1);
    }

    if(temp.back() == 0){
        temp[2]++;
        temp[0]--;
    }
    return temp;
}

int main(){
    int t, n;
    std::vector<std::vector<int>> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        ans.push_back(solve(n));
    }
    for(auto i : ans){
        std::cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<"\n";
    }
    return 0;
}