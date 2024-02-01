#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, cnt, temp;
    vector<int> arr;

    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());

    cnt = 0;
    for(int i = 0; i < n; i += 2){
        cnt += (arr[i+1] - arr[i]);
    }

    cout<<cnt;
    return 0;
}