#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

ll solve(vector<ll> arr, int n){
    sort(arr.begin(), arr.end());

    return max(arr[0] * arr[1], arr[n-1] * arr[n-2]);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t, n, temp;
    vector<ll> ans;
    cin>>t;
    
    for(int i = 0; i < t; i++){
        cin>>n;
        vector<ll> arr;
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