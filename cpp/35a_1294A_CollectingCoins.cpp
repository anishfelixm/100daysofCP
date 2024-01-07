#include<bits/stdc++.h>

int main(){
    int t, a, b, c, n, sum;
    std::vector<std::string> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>a>>b>>c>>n;
        std::vector<int> array = {a,b,c};
        sort(array.begin(), array.end());
        sum = 0 + array[2] - array[0] + array[2] - array[1];
        if (sum > n){
            ans.push_back("NO");
        }
        else{
            n = n - sum;
            if(n %  3 == 0){
                ans.push_back("YES");
            }
            else{
                ans.push_back("NO");
            }
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}