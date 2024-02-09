#include<bits/stdc++.h>

using namespace std;

string solve(vector<int> a, int n){
    int k = pow(2, (int)log2(n)) - 1, maxi = a[k + 1], mini;
    //cout<<k<<" "<<maxi<<"\n";
    for(int i = k+2; i < n; i++){
        if(a[i] < maxi){
            return "NO";
        }
        maxi = max(maxi, a[i]);
        //cout<<maxi<<" ";
    }
    for(int i = k; i > -1; i--){
        if((int)log2(i+1) != (int)log2(i)){
            mini = a[i];
        }
        else{
            if(a[i] > mini){
                return "NO";
            }
            mini = min(mini, a[i]);
        }
        //cout<<mini<<" ";
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