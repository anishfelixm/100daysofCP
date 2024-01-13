#include<bits/stdc++.h>

int main(){
    int n;
    std::cin>>n;
    std::vector<std::vector<int>> arr;
    for(int i = 0; i < n; i++){
        std::vector<int> nxt;
        for(int j = 0; j < n; j++){
            if (i == 0 || j == 0){
                nxt.push_back(1);
            }
            else{
                nxt.push_back(nxt[j-1] +arr[i-1][j]);
            }
        }
        arr.push_back(nxt);
    }
    std::cout<<arr[n-1][n-1];
    return 0;
}