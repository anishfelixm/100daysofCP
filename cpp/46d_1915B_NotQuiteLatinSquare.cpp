#include<bits/stdc++.h>

void func(std::string s, int arr[][3]){
    for(int i = 0; i < 3; i++){
        if(s[i] == 'A'){
            arr[0][i] = 1;
        }
        else if(s[i] == 'B'){
            arr[1][i] = 1;
        }
        else if (s[i] == 'C'){
            arr[2][i] = 1;
        }
    }
}

int main(){
    int t;
    std::string l1, l2, l3;
    std::vector<char> ans;
    std::cin>>t;
    for (int i = 0; i < t; i++){
        std::cin>>l1>>l2>>l3;
        int arr[3][3] = {{0}};
        func(l1, arr);
        func(l2, arr);
        func(l3, arr);
        for (int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                if (arr[j][k] == 0){
                    if (j == 0){
                        ans.push_back('A');
                    }
                    else if (j == 1){
                        ans.push_back('B');
                    }
                    else if (j == 2){
                        ans.push_back('C');
                    }
                    continue;
                }
            }
        }
    }
    for(auto i : ans){
        std::cout<<i<<"\n";
    }
    return 0;
}
