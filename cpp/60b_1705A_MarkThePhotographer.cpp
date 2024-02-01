#include<bits/stdc++.h>

using namespace std;

string solve(vector<int> arr, int n, int x){
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++){
        if(arr[i] + x > arr[n+i]){
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
        vector<int> arr;
        for(int j = 0; j < (2*n); j++){
            cin>>temp;
            arr.push_back(temp);
        }
        ans.push_back(solve(arr, n, x));
    }

    for(auto i : ans){
        cout<<i<<"\n";
    }
    return 0;
}