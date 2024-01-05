#include<bits/stdc++.h>

int main(){
    int t, n, temp, val;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        std::vector<int> array;
        for(int j = 0; j < n; j++){
            std::cin>>temp;
            array.push_back(temp);
        }
        sort(array.begin(), array.end());
        val = array[n-1];
        for(int j = 1; j < n; j++){
            val = std::min(val, (array[j] - array[j-1]));
        }
        ans.push_back(val);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}