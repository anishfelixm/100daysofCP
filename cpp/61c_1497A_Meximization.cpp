#include<bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int> arr, int n){
    vector<int> ans;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++){
        if(arr[i] != arr[i-1]){
            ans.push_back(arr[i]);
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == arr[i-1]){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, temp;
    vector<vector<int>> ans;
    cin>>t;

    for(int i = 0; i < t; i++){
        cin>>n;
        vector<int> arr;
        for(int j = 0; j < n; j++){
            cin>>temp;
            arr.push_back(temp);
        }
        ans.push_back(solve(arr, n));
    }

    for(auto i : ans){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}