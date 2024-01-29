#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    string s;
    vector<string > ans;
    cin>>t;
    for (int i = 0; i < t; i++){
        cin>>s;
        sort(s.begin(), s.end());
        ans.push_back(s);
    }
    for (auto i : ans){
        cout<<i<<"\n";
    }
    return 0;
}