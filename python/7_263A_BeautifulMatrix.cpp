#include<bits/stdc++.h>

int main(){
    int array[5][5], xPosOne, yPosOne, ans;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            std::cin>>array[i][j];
            if (array[i][j] == 1){
                xPosOne = i + 1;
                yPosOne = j + 1;
            }
        }
    }
    ans = abs(xPosOne - 3) + abs(yPosOne - 3) ;
    std::cout<<ans;
    return 0;
}