#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, n, k, a, b;
    vector<int> ans;
    
    cin>>t;

    for (int i = 0; i < t; i++){
        cin>>n>>k;
        vector<vector<int>> arr;
        for (int j = 0; j < n; j++){
            cin>>a;
            arr.push_back({a});
        }
        for(int j = 0; j < n; j++){
            cin>>b;
            arr[j].push_back(b);
        }
        sort(arr.begin(), arr.end(), [](vector<int> x, vector<int> y){
            return x[0] < y[0];
        });
        for(int j = 0; j < n; j++){
            if(arr[j][0] > k){
                continue;
            }
            else{
                k += arr[j][1];
            }
        }
        ans.push_back(k);
    }
    for(auto i : ans){
        cout<<i<<"\n";
    }
    return 0;
}