#include<bits/stdc++.h>

int main(){
    int n, p_no, q_no, temp;
    std::vector<int> p, q;
    std::cin>>n;
    std::vector<bool> pass (n, false);
    std::cin>>p_no;
    for(int i = 0; i < p_no; i++){
        std::cin>>temp;
        p.push_back(temp);
        pass[temp - 1] = true;
    }
    std::cin>>q_no;
    for(int i = 0; i < q_no; i++){
        std::cin>>temp;
        q.push_back(temp);
        pass[temp - 1] = true;
    }
    for(auto i : pass){
        if (i == false){
            std::cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    std::cout<<"I become the guy.";
    return 0;
}