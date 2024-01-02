#include<bits/stdc++.h>

int main(){
    int t, n, a, no_of_0, no_of_1, even_out_of_place, odd_out_of_place;
    std::vector<int> ans;
    std::cin>>t;
    for(int i = 0; i < t; i++){
        no_of_0 = 0, no_of_1 = 0, even_out_of_place = 0, odd_out_of_place = 0;
        std::cin>>n;
        for(int j = 0; j < n; j++){
            std::cin>>a;
            if(a % 2 == 0){
                no_of_0++;       
                if((a % 2) != (j % 2)){
                    even_out_of_place++;
                }
            }
            else{
                no_of_1++;       
                if((a % 2) != (j % 2)){
                    odd_out_of_place++;
                }
            }
        }
        if (n % 2 == 0){
            if(no_of_0 != no_of_1){
                ans.push_back(-1);
            }
            else{
                if(even_out_of_place != odd_out_of_place){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(even_out_of_place);
                }
            }
        }
        else{
            if(no_of_0 < no_of_1){
                ans.push_back(-1);
            }
            else{
                if(even_out_of_place != odd_out_of_place){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(even_out_of_place);
                }
            }
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}