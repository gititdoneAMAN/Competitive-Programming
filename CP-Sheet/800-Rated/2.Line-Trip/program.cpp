#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n,k;

        cin>>n>>k;

        vector<int>nums(n);

        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        int ans=0;

        for(int i=1;i<n;i++){
            int val = nums[i]-nums[i-1];
            ans = max(val,ans);
        }

        ans = max(nums[0]-0,ans);
        ans = max(2*(k-nums[n-1]),ans);

        cout<<ans<<endl;
    }
}