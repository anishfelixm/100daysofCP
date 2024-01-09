#include<bits/stdc++.h>

int main(){
    int t, n, flag;
    std::string a, b;
    std::vector<std::string> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        std::cin>>a>>b;
        flag = 0;
        for(int j = 0; j < n; j++){
            if ((a[j] == 'R' && b[j] != 'R') || (a[j] != 'R' && b[j] == 'R')){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}