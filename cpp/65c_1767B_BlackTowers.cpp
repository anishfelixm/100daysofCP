#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> arr, int n){
    sort(arr.begin()+1, arr.end());
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[0]){
            arr[0] = ceil((arr[i] + arr[0]) / 2.0);
        }
    }
    return arr[0];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, temp;
    vector<int> ans;
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
        cout<<i<<'\n';
    }
    return 0;
}