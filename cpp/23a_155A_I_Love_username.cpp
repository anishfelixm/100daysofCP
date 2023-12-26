#include<bits/stdc++.h>

int main(){
    int n, small, big, temp, cnt = 0;
    std::vector<int> scores;
    std::cin>>n;
    for(int  i = 0; i < n; i++){
        std::cin>>temp;
        if (i == 0){
            scores.push_back(temp);
            small = temp;
            big = temp;
        }
        else{
            if (temp > big){
                cnt++;
                big = temp;
            }
            if ( temp < small){
                cnt++;
                small = temp;
            }
        }
    }
    std::cout<<cnt;
    return 0;
}