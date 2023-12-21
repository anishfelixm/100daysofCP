#include<bits/stdc++.h>

int main(){
    int s1, s2, s3, s4;
    std::cin>>s1>>s2>>s3>>s4;
    std::unordered_set<int> hset;
    hset.insert(s1);
    hset.insert(s2);
    hset.insert(s3);
    hset.insert(s4);
    std::cout<< (4 - hset.size());
    return 0;
}