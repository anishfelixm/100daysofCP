#include<bits/stdc++.h>

using namespace std;

int get_till_odd(int k){
    int cnt = 0;
    while(k % 2 == 0){
        cnt++;
        k /= 2;
    }
    return cnt;
}

int solve(vector<int> a, int n, int even, int odd){
    if (odd != 0){
        return even;
    }
    int min_to_odd = 1000000000;
    for(int i = 0; i < n; i++){
        min_to_odd = min(min_to_odd, get_till_odd(a[i]));
    }
    return min_to_odd + even - 1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, temp, no_even, no_odd;
    vector<int> ans;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        no_even = 0, no_odd = 0;
        vector<int> a;
        for(int j = 0; j < n; j++){
            cin>>temp;
            a.push_back(temp);
            if(temp % 2 == 0){
                no_even++;
            }
            else{
                no_odd++;
            }
        }
        ans.push_back(solve(a, n, no_even, no_odd));
    }
    for(auto i : ans){
        cout<<i<<'\n';
    }
    return 0;
}