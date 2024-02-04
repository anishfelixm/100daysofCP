#include<bits/stdc++.h>

using namespace std;

int solve(map<int, int> hmap, int c){
    int cnt = 0;
    for(auto i : hmap){
        cnt += min(c, i.second);
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, c, temp;
    vector<int> ans;
    cin>>t;

    for(int i = 0; i < t; i++){
        cin>>n>>c;
        map<int, int> hmap;
        for(int j = 0; j < n; j++){
            cin>>temp;
            hmap[temp]++;
        }
        ans.push_back(solve(hmap, c));
    }

    for(auto i : ans){
        cout<<i<<'\n';
    }
    return 0;
}