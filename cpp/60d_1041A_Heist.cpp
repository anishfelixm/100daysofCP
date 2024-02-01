#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, temp, mini = INT_MAX, maxi = INT_MIN;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>temp;
        mini = min(mini, temp);
        maxi = max(maxi, temp);
    }
    cout<<(maxi - mini) + 1 - n;
    return 0;
}