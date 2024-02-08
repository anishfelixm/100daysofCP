#include<bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int> a, int n){
    vector<int> b(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    unordered_map<int, int> hmap;
    vector<int> ans;
    for(int i = 0; i < n; i++){
        hmap[b[i]] = i+1;
    }
    for(int i = 0; i < n; i++){
        ans.push_back(hmap[a[i]]);
        hmap[a[i]]--;
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
        vector<int> a;
        for(int j = 0; j < n; j++){
            cin>>temp;
            a.push_back(temp);
        }
        ans.push_back(solve(a, n));
    }

    for(auto i : ans){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}