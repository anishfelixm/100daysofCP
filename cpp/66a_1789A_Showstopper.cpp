#include<bits/stdc++.h>

using namespace std;

string solve(vector<int> a, vector<int> b, int n){
    for(int i = 0; i < n; i++){
        if(a[i] > a[n-1]){
            swap(a[i], b[i]);
        }
        if(b[i] > b[n-1]){
            swap(a[i], b[i]);
        }
        if(a[i] > a[n-1] || b[i] > b[n-1]){
            return "NO";
        }
    }
    return "YES";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, temp;
    vector<string> ans;
    cin>>t;

    for(int i = 0; i < t; i++){
        cin>>n;
        vector<int> a, b;
        for(int i = 0; i < n; i++){
            cin>>temp;
            a.push_back(temp);
        }
        for(int i = 0; i < n; i++){
            cin>>temp;
            b.push_back(temp);
        }
        ans.push_back(solve(a, b, n));
    }

    for(auto i : ans){
        cout<<i<<'\n';
    }
    return 0;
}