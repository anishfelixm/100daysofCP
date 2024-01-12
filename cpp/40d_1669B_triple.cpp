#include<bits/stdc++.h>

int main(){
    int t, n, temp, num;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        std::unordered_map<int, int> hmap;
        num = -1;
        for(int i = 0; i < n; i++){
            std::cin>>temp;
            hmap[temp]++;
            if(hmap[temp] >= 3){
                num = temp;
            }
        }
        ans.push_back(num);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}