#include<bits/stdc++.h>

using namespace std;

string solve(vector<int> a, int n, int k){
    int flag = 0;
    for(int i = 1; i < n; i++){
        if(a[i] < a[i-1]){
            flag = 1;
        }
    }
    if(flag == 0){
        return "YES";
    }
    if(k > 1){
        return "YES";
    }
    return "NO";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, k, temp;
    vector<string> ans;
    cin>>t;

    for(int i = 0; i < t; i++){
        cin>>n>>k;
        vector<int> arr;
        for(int j = 0; j < n; j++){
            cin>>temp;
            arr.push_back(temp);
        }
        ans.push_back(solve(arr, n, k));
    }

    for(auto i : ans){
        cout<<i<<"\n";
    }
    return 0;
}