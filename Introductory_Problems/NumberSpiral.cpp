#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        long long x,y;
        cin>>x>>y;
        long long base = max(x,y);
        long long root = (base-1) * (base-1);
        long long ans;
        if(base%2 == 0){
            if (x == base)
                ans = base*base - (y-1);
            else 
                ans = root + x;
        }
        else{
            if (y == base)
                ans = base*base - (x-1);
            else 
                ans = root + y;
        }

        cout<<ans<<"\n";
    }
    return 0;
}