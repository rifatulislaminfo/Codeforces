#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
    long long a,b,suml,sumr,ans;
    
    cin>>a>>b;
    if(a<b){
    a=a-1;
    suml=(a*(a+1))/2;
    
    sumr=(b*(b+1))/2;
    
    ans=sumr-suml;
    
    cout <<ans<<endl;
    }
    else{
    b=b-1;
    suml=(a*(a+1))/2;
    
    sumr=(b*(b+1))/2;
    ans=suml-sumr;
    cout<<ans<<"\n";
    }
    }
    return 0;
}