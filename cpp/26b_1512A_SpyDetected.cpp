#include<bits/stdc++.h>

int main(){
    int t, n, temp, val;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        std::unordered_map<int,int> hmap;
        std::vector<int> array;
        for(int i = 0; i < n; i++){
            std::cin>>temp;
            array.push_back(temp);
            hmap[temp]++;
        }
        for(auto i = hmap.begin(); i != hmap.end(); i++){
            if(i->second == 1){
                val = i->first;
            }
        }
        for(int i = 0; i < n; i++){
            if(array[i] == val){
                ans.push_back(i+1);
                break;
            }
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}