#include<bits/stdc++.h>

int main(){
    int t, n, d, min1, min2, gtr_than_d, temp;
    std::vector<std::string > ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        std::cin>>n>>d;
        min1 = INT_MAX, min2 = INT_MAX, gtr_than_d = 0;
        for(int j = 0; j < n; j++){
            std::cin>>temp;
            if(temp < min1){
                min2 = min1;
                min1 = temp;
            }
            else{
                if(temp < min2){
                    min2 = temp;
                }
            }
            if(temp > d){
                gtr_than_d++;
            }
        }
        //std::cout<<min1<<" "<<min2<<" "<<gtr_than_d<<"\n";
        if(gtr_than_d < 1){
            ans.push_back("YES");
        }
        else{
            if (min1 + min2 <= d){
                ans.push_back("YES");
            }
            else{
                ans.push_back("NO");
            }
        }
    }
    for (auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}