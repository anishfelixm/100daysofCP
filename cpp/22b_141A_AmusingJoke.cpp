#include<bits/stdc++.h>

int main(){
    std::string s1, s2, s3;
    std::cin>>s1>>s2>>s3;
    std::unordered_map<char,int> hmap_s1s2, hmap_s3;
    for(auto i : s1){
        hmap_s1s2[i]++;
    }
    for(auto i : s2){
        hmap_s1s2[i]++;
    }
    for(auto i : s3){
        hmap_s3[i]++;
    }
    if(hmap_s1s2.size() != hmap_s3.size()){
        std::cout<<"NO";
        return 0;
    }
    for(auto i = hmap_s1s2.begin(); i != hmap_s1s2.end(); i++){
        if(hmap_s3.find(i->first) == hmap_s3.end()){
            std::cout<<"NO";
            return 0;
        }
        else{
            if(hmap_s3[i->first] != hmap_s1s2[i->first]){
                std::cout<<"NO";
                return 0;
            }
        }
    }
    std::cout<<"YES";
    return 0;
}