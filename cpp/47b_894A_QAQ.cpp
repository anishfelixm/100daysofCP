#include<bits/stdc++.h>

int solve(std::string s){
    int cnt = 0, NO_of_A;
    for(int i = 0; i < s.size(); i++){
        if (s[i] == 'Q'){
            NO_of_A = 0;
            for(int j = i+1; j < s.size(); j++){
                if (s[j] == 'A'){
                    NO_of_A++;
                }
                if(s[j] == 'Q'){
                    cnt += (NO_of_A);
                }
            }
        }
    }
    return cnt;
}

int main(){
    std::string n;
    std::cin>>n;
    std::cout<<solve(n);
    return 0;
}