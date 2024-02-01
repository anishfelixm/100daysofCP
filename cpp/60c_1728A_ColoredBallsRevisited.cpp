#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n, temp, maxi, pos;
    vector<int> ans;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        maxi = INT_MIN;
        for(int j = 0; j < n; j++){
            cin>>temp;
            if(temp > maxi){
                maxi = temp;
                pos = j + 1;
            }
        }
        ans.push_back(pos);
    }
    for(auto i : ans){
        cout<<i<<'\n';
    }
    return 0;
}