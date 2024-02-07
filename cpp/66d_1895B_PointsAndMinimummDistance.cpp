#include<bits/stdc++.h>

using namespace std;

int get_distance(vector<int> a){
    int cnt = 0;
    for(int i = 1; i < (a.size() / 2); i++){
        cnt += (a[i] - a[i-1]);
    }
    for(int i = (a.size() / 2) + 1; i < a.size(); i++){
        cnt += (a[i] - a[i-1]);;
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, temp;
    vector<vector<int>> arr;
    cin>>t;

    for(int i = 0; i < t; i++){
        cin>>n;
        vector<int> a;
        for (int j = 0; j < (2 * n); j++){
            cin>>temp;
            a.push_back(temp);
        }
        arr.push_back(a);
    }

    for(int i = 0; i < t; i++){
        sort(arr[i].begin(), arr[i].end());
        cout<<get_distance(arr[i])<<"\n";
        for(int j = 0; j < (arr[i].size() / 2); j++){
            cout<<arr[i][j]<<" "<<arr[i][(arr[i].size() / 2)+ j]<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}