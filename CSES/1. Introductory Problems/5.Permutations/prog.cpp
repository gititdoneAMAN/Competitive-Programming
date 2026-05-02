#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin>>n;

    if(n==1){
        cout<<1<<endl;
        return 0;
    }

    if(n==2 || n==3){
        cout<< "NO SOLUTION"<<endl;
        return 0;
    }

    for(long long i=2;i<=n;i+=2){
        cout<<i<<" ";
    }

    for(long long i=1;i<=n;i+=2){
        cout<<i<<" ";
    }

    cout<<endl;
}