#include <bits/stdc++.h>
using namespace std;

int main(){
    //Input
    long long n;
    long long int sum = 0;
    cin>>n;
    for (int i=0;i<(n-1);i++){
        int a;
        cin>>a;
        sum = sum + a ;
    }

    long long int ans = (n * (n + 1) / 2) - sum;

    //Output
    cout<<ans;
    return 0;
}