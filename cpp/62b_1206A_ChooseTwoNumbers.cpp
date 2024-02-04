#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, temp, a_max = 0, b_max = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>temp;
        a_max = max(a_max, temp);
    }
    cin>>m;
    for(int i = 0; i < m; i++){
        cin>>temp;
        b_max = max(b_max, temp);
    }
    cout<<a_max<<" "<<b_max;
    return 0;
}