#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, no_z = 0, no_n = 0;
    std::string s, ans = "";
    
    cin>>n>>s;
    
    for(auto i : s){
        if (i == 'z')
            no_z++;
        else if(i == 'n')
            no_n++;
    }

    while(no_n--){
        ans += "1 ";
    }
    while(no_z--){
        ans += "0 ";
    }
    
    cout<<ans;

    return 0;
}