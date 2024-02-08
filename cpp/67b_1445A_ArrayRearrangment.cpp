#include<bits/stdc++.h>

using namespace std;

string solve(vector<int> a, vector<int> b, int n, int x){
    int k;
    vector<int> chk(1001, 0);
    for(auto i : a){
        chk[i]++;
    }
    for(int i = 1; i < 1000; i++){
        chk[i] += chk[i-1];
    }
    for(int i = 0; i < n; i++){
        k = x - b[i];
        if(chk[k] < (n-i)){
            return "NO";
        }
    }
    return "YES";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, x, temp;
    vector<string> ans;
    cin>>t;

    for(int i = 0; i < t; i++){
        cin>>n>>x;
        vector<int> a, b;
        for(int j = 0; j < n; j++){
            cin>>temp;
            a.push_back(temp);
        }
        for(int j = 0; j < n; j++){
            cin>>temp;
            b.push_back(temp);
        }
        ans.push_back(solve(a, b, n, x));
    }
    for(auto i : ans){
        cout<<i<<"\n";
    }
    return 0;
}