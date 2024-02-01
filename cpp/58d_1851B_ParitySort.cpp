#include<bits/stdc++.h>

using namespace std;

string solve(vector<int> arr, int n){
    vector<int> temp(arr.begin(), arr.end());
    sort(temp.begin(), temp.end());
    for(int i = 0; i < n; i++){
        if(temp[i] % 2 != arr[i] % 2){
            return "NO";
        }
    }
    return "YES";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, temp;
    vector<string> ans;
    cin>>t;

    for(int i = 0; i < t; i++){
        cin>>n;
        vector<int> arr;
        for (int j = 0; j < n; j++){
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