#include<bits/stdc++.h>

int get_next(int k){
    int num = 1;
    for(int i = 1; i < k; i++){
        num = (num * 10) + 1;
    }
    return num;
}

int main(){
    int t, n, k, cnt, numb;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        k = log10(n) + 1;
        cnt = 0 + (9 * (k - 1));
        numb = get_next(k);
        for(int j = numb; j <= n; j = j + numb){
            cnt++;
        }
        ans.push_back(cnt);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}