#include<bits/stdc++.h>

using namespace std;

int solve(string s){
    vector<int> arr;
    int cnt = 0, i = 0, temp;
    while(i < s.size()){
        if(s[i] == '1'){
            temp = 0;
            while(s[i] =='1'){
                temp++;
                i++;
            }
            arr.push_back(temp);
        }
        else{
            i++;
        }
    }
    sort(arr.begin(), arr.end());
    for(int i = arr.size()-1; i > -1; i -= 2){
        cnt += arr[i];
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    string s;
    vector<int> ans;
    cin>>t;

    for(int i = 0; i < t; i++){
        cin>>s;
        ans.push_back(solve(s));
    }

    for(auto i : ans){
        cout<<i<<'\n';
    }
    return 0;
}