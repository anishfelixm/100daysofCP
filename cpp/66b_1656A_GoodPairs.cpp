#include<bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int> a, int n){
    int min_pos = 0, max_pos = 0;
    for(int i = 1; i < n; i++){
        if(a[i] < a[min_pos]){
            min_pos = i;
        }
        if(a[i] > a[max_pos]){
            max_pos = i;
        }
    }
    return {min_pos+1, max_pos+1};
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
        cout<<i[0]<<" "<<i[1]<<"\n";
    }
    return 0;
}