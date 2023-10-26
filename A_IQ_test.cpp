/* Bismillah
 * author:  Rifatul Islam
 * created: 26.10.2023
 */ 
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,s1=0,s2=0;
    cin>>t;

    //vector<int>v(t);
    int v[t];
    for(int i=1;i<=t;i++){
        cin>>v[i];
    if(v[i]%2==0){
                s1++;
            }
            else{
                s2++;
            }
    }

  
         for(int i=1;i<=t;i++){
            if(s1==1){
            if(v[i]%2==0){
                cout<<i<<endl;
                return 0;
            }
            }
            else{
                if(v[i]%2!=0){
                    cout<<i<<endl;
                return 0;
                }
            }
        }
    
    return 0;

}