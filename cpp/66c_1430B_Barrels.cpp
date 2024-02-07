#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll solve(vector<ll> arr, int n, int k){
    sort(arr.begin(), arr.end());
    for(int i = 1; i <= k; i++){
        arr[n-1] += arr[n-1-i];
        arr[n-1-i] = 0;
    }
    return arr[n-1]-0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, k;
    ll temp;
    vector<ll> ans;
    cin>>t;

    for(int i = 0; i < t; i++){
        cin>>n>>k;
        vector<ll> arr;
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