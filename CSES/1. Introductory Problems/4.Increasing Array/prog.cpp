#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;

    vector<long long>arr(n,0);
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }

    long long ans=0;
    for(long long i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            int val = (arr[i-1]-arr[i]);
            ans += val;
            arr[i] = arr[i]+val;
        }
    }

    cout<<ans<<endl;
}