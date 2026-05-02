#include<bits/stdc++.h>

using namespace std;

int main(){
    string val;
    cin >> val;

    long long n=val.size();
    long long curr=1,maxSize=1;

    for(long long i=1;i<n;i++){
        if(val[i]==val[i-1]){
            curr++;
            maxSize = max(curr,maxSize);
        }else{
            curr=1;
        }
    }

    cout<<maxSize<<endl;
}