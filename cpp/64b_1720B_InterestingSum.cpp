#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> arr, int n){
    sort(arr.begin(), arr.end());
    return arr[n-1] - arr[0] + arr[n-2] - arr[1];
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
        cout<<i<<"\n";
    }
    return 0;
}