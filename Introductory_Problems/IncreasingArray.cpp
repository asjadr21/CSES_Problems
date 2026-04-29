#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    long long int ans = 0;
    long long int left;
    cin>>left;
    for (int i=1;i<n;i++){
        long long int right; 
        cin>>right;
        if (left>right)
            ans = ans + (left-right);
        else
            left = right;
    }

    cout<<ans;
    return 0;
}