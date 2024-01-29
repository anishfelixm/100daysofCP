#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    double avg, larg, temp;
    vector<double> ans;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        avg = 0, larg = INT_MIN;
        for(int j = 0; j < n; j++){
            cin>>temp;
            avg += temp;
            larg = max(larg, temp);
        }
        avg -= larg;
        avg = avg / (n-1);
        avg += larg;
        ans.push_back(avg);
    }
    for(auto i : ans){
        cout<<fixed<<setprecision(9)<<i<<"\n";
    }
    return 0;
}