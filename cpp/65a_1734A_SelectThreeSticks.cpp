#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

ll solve(vector<ll> arr, ll n){
    sort(arr.begin(), arr.end());
    ll cnt = 4000000000;
    for(int i = 2; i < n; i++){
        cnt = min(arr[i] - arr[i-1] + arr[i-1] - arr[i-2], cnt);
    }
    return cnt;
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