#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    
    vector<long long> arr(n,0);

    long long val=0;

    for(long long i=1;i<n;i++){
        cin>>arr[i];
        val ^= arr[i];
    }

    for(long long i=1;i<=n;i++){
        val ^= i ;
    }

    cout<<val;
}