#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, temp;
    vector<int> ans;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        int m1 = 0, m2= 0;
        for(int i = 0; i < n; i++){
            cin>>temp;
            if(temp > m1){
                m2 = m1;
                m1 = temp;
            }
            else if(temp > m2){
                m2 = temp;
            }
        }
        ans.push_back(m1 + m2);
    }
    for(auto i : ans){
        cout<<i<<"\n";
    }
    return 0;
}