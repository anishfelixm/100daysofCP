#include<bits/stdc++.h>

int main(){
    int n, prev, temp, start = 0, end = 0, max = 1;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>temp;
        if(i == 0){
            prev = temp;
            continue;
        }
        if (temp > prev){
            end++;
        }
        else{
            max = std::max(max, (end - start) + 1);
            start = i;
            end = i;
        }
        prev = temp;
    }
    max = std::max(max, (end - start) + 1);
    std::cout<<max;
    return 0;
}