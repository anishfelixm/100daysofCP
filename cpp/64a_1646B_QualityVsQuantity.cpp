#include<bits/stdc++.h>

using namespace std;

string solve(vector<int> arr, int n){
    sort(arr.begin(), arr.end());
    long long blue = arr[0], red = 0, front = 1, back = n-1;
    while(front < back){
        blue += arr[front];
        red += arr[back];
        front++, back--;
        //cout<<blue<<" "<<red<<'\n';
        if(blue < red){
            return "YES";
        }
    }
    return "NO";
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
        for(int j = 0; j < n; j++){
            cin>>temp;
            arr.push_back(temp);
        }
        ans.push_back(solve(arr, n));
    }

    for(auto i : ans){
        cout<<i<<"\n";
    }
    return 0;
}