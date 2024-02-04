#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> a, vector<int> b, int n){
    int a_1 = 0, b_1 = 0, a_out = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 1){a_1++;}
        if(b[i] == 1){b_1++;}
        if(a[i] != b[i]){a_out++;}
    }
    if(a_out == 0){return 0;}
    else if(a_1 == b_1){return 1;}
    if(abs(a_1 - b_1) == a_out){
        return abs(a_1 - b_1);
    }
    else{
        return 1 + abs(a_1 - b_1);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, temp;
    vector<int> ans;
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