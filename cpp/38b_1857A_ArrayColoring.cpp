#include<bits/stdc++.h>

int main(){
    int t, n, temp, no_of_even, no_of_odd;
    std::vector<std::string> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n;
        no_of_even = 0, no_of_odd = 0;
        for(int j = 0; j < n; j++){
            std::cin>>temp;
            if (temp % 2 == 0){
                no_of_even++;
            }
            else{
                no_of_odd++;
            }
        }
        if(no_of_odd % 2 == 0){
            ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}