#include<bits/stdc++.h>

int count(int i, int j){
    if(i % 9 == 0 || i % 9 == 9 || j % 9 == 0 ||j % 9 == 9){
        return 1;
    }
    else if(i % 9 == 1 || i % 9 == 8 || j % 9 == 1 ||j % 9 == 8){
        return 2;
    }
    else if(i % 9 == 2 || i % 9 == 7 || j % 9 == 2 ||j % 9 == 7){
        return 3;
    }
    else if(i % 9 == 3 || i % 9 == 6 || j % 9 == 3 ||j % 9 == 6){
        return 4;
    }
    else{
        return 5;
    }
}

int solve(){
    int cnt = 0;
    std::string s;
    std::vector<std::string> arr;
    for(int i = 0; i < 10; i++){
        std::cin>>s;
        arr.push_back(s);
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(arr[i][j] == 'X')
                cnt += count(i, j);
        }
    }
    return cnt;
}

int main(){
    int t;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        ans.push_back(solve());
    }
    for (auto i : ans){
        std::cout<<i<<'\n';
    }
    return 0;
}