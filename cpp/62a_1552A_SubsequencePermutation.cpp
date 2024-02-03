#include<bits/stdc++.h>

using namespace std;

int solve(string s, int n){
    int cnt = 0;
    string temp = s;
    sort(temp.begin(), temp.end());
    for(int i = 0; i < n; i++){
        if(s[i] != temp[i]){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    string s;
    vector<int> ans;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        cin>>s;
        ans.push_back(solve(s, n));
    }

    for(auto i : ans){
        cout<<i<<"\n";
    }
    return 0;
}