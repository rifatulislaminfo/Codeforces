#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    
}


int main(){
    FASTER
    int t;
    cin>>t;
    while(t--){

        int a,b;
        cin>>a>>b;
        ll arr[a+1];

    
        ll presum[a+123];
         presum[0]=0;

        for(int i=1;i<=a;i++) cin>>arr[i];

        for(int i=1;i<=a;i++){
            presum[i]=presum[i-1]+arr[i];
        }
        while(b--){
        ll l,r,q;
        cin>>l>>r>>q;

        ll ans=presum[a]-(presum[r]-presum[l-1])+(r-l+1)*q;

        if(ans%2==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    }
  
    return 0;
}