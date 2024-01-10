#include<bits/stdc++.h>

int main(){
    int t, n, temp, x, y;
    std::vector<std::vector<int>> f_ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        std::vector<int> arr, ans;
        for(int j = 0; j < n; j++){
            std::cin>>temp;
            arr.push_back(temp);
        }
        x = 0, y = n-1, temp = 0;
        while (temp < n){
            if (temp % 2 == 0){
                ans.push_back(arr[x]);
                x++;
            }
            else{
                ans.push_back(arr[y]);
                y--;
            }
            temp++;
        }
        f_ans.push_back(ans);
    }
    for(int i = 0; i < f_ans.size(); i++){
        for (int j = 0; j < f_ans[i].size(); j++){
            std::cout<<f_ans[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}