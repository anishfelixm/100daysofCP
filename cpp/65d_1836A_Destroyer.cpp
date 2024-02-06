#include<bits/stdc++.h>

using namespace std;

string solve(map<int, int> hmap, int last){
    if(hmap[0] == 0){
        return "NO";
    }
    for(int i = 1; i <= last; i++){
        if(hmap[i] > hmap[i-1]){
            return "NO";
        }
    }
    return "YES";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, temp, last;
    vector<string> ans;
    cin>>t;

    for(int i = 0; i < t; i++){
        cin>>n;
        map<int, int> hmap;
        last = 0;
        for(int j = 0; j < n; j++){
            cin>>temp;
            hmap[temp]++;
            last = max(last, temp);
        }
        ans.push_back(solve(hmap, last));
    }

    for(auto i : ans){
        cout<<i<<"\n";
    }
    return 0;
}