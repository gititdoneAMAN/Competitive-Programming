#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int count=0;
        int temp=0;
        bool hasThree=false;

        for(int i=0;i<s.size();i++){
            if(s[i]=='.'){
                count++;
                temp++;

                if(temp>=3){
                    hasThree=true;
                }
            }else{
                temp=0;
            }
        }

        if(hasThree){
            cout<<2<<endl;
        }else{
            cout<<count<<endl;
        }
    }
}