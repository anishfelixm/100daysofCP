#include<bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int> arr, int n){
    vector<int> ans;
    for(int i = 0; i < (n/2); i++){
        ans.push_back(arr[i]);
        ans.push_back(arr[n-1-i]);
    }
    if(n % 2 != 0){
        ans.push_back(arr[(n /2)]);
    }
    return ans;
}

int main(){
    int t, n, temp;
    vector<vector<int>> arr;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        vector<int> a;
        for(int j = 0; j < n; j++){
            cin>>temp;
            a.push_back(temp);
        }
        arr.push_back(a);
    }
    for(auto i : arr){
        sort(i.begin(), i.end());
        if(i[0] == i[i.size()-1]){
            cout<<"NO";
        }
        else{
            i = solve(i, i.size());
            cout<<"YES\n";
            for(auto j : i){
                cout<<j<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}