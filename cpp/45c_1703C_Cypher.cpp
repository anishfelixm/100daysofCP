#include<bits/stdc++.h>

int func(std::string s){
    int cnt = 0;
    for(auto i : s){
        if (i == 'D'){
            cnt += 1;
        }
        else{
            cnt -= 1;
        }
    }
    return cnt;
}

int main(){
    int t, n, temp, bn;
    std::vector<std::vector<int>> ans;
    std::string m_str;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        std::vector<int> cipher;
        for(int j = 0; j < n; j++){
            std::cin>>temp;
            cipher.push_back(temp);
        }
        for(int j = 0; j < n; j++){
            std::cin>>bn>>m_str;
            cipher[j] = (cipher[j] + func(m_str)) % 10;
            if (cipher[j] < 0){
                cipher[j] = (10 + cipher[j]) % 10;
            }
        }
        ans.push_back(cipher);
    }
    for(auto i : ans){
        for(auto j : i){
            std::cout<<j<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}