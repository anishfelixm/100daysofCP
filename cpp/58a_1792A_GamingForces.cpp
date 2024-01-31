#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n, temp;
    float no_1;
    vector<int> ans;
    cin>>t;
    for (int i = 0; i < t; i++){
        cin>>n;
        no_1 = 0;
        for (int j = 0; j < n; j++){
            cin>>temp;
            if(temp == 1){
                no_1 ++;
            }
        }
        ans.push_back(ceil(no_1 / 2) + (n - no_1));
    }
    for(auto i : ans){
        cout<<i<<"\n";
    }
    return 0;
}