#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, temp;
    vector<int> arr;
    cin>>n;
    cin>>m;
    for(int i = 0; i < n; i++){
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    int cnt = 0, sum = 0;
    while(sum < m){
        sum += arr.back();
        cnt++;
        arr.pop_back();
    } 
    cout<<cnt;
    return 0;
}