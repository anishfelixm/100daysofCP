#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> arr, int n){
    int cnt = 0;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++){
        if(arr[i] != arr[0]){
            cnt ++;
        }
    }
    return cnt;
}

int main(){
    int t, n, temp;
    vector<int> ans;
    cin>>t;
    for (int i = 0; i < t; i++){
        cin>>n;
        vector<int> arr;
        for(int j = 0; j < n; j++){
            cin>>temp;
            arr.push_back(temp);
        }
        ans.push_back(solve(arr, n));
    }
    for (auto i : ans){
        cout<<i<<"\n";
    }
    return 0;
}