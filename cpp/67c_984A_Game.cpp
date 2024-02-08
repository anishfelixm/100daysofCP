#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, temp;
    cin>>n;
    vector<int> a;
    for(int i = 0; i < n; i++){
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    cout<<a[(n-1)/2];
    return 0;
} 