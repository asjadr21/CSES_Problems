#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    long long int maxLen = 1;
    long long int left = 0;
   
    for (long long int right = 1; right < (long long int)s.size(); right++){
        if (s[right] != s[right-1]){
            maxLen = max(maxLen, right - left);
            left = right;
        }
    }
    maxLen = max(maxLen, (long long int)s.size() - left);
    cout<<maxLen;
    return 0;
}