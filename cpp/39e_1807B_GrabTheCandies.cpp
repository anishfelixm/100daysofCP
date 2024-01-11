#include<bits/stdc++.h>

int main(){
    int t, n, m_cnt, b_cnt, temp;
    std::vector<std::string> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>n;
        m_cnt = 0, b_cnt = 0;
        for(int j = 0; j < n; j++){
            std::cin>>temp;
            if (temp % 2 == 0){
                m_cnt += temp;
            }
            else{
                b_cnt += temp;
            }
        }
        if(m_cnt > b_cnt){
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