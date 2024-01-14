#include<bits/stdc++.h>

int main(){
    int t, a, b, n, cnt, temp1, temp2;
    std::vector<int> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>temp1>>temp2>>n;
        cnt = 0, a = std::min(temp1, temp2), b = std::max(temp1, temp2);
        while (a <= n && b <= n){
            if (cnt % 2 == 0){
                a += b;
            }
            else{
                b += a;
            }
            cnt ++;
        }
        ans.push_back(cnt);
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}

//3412102 17440 26861982 == 5
//15 12409 160767 == 6