#include<bits/stdc++.h>
using namespace std;


 int countWords(string list[], int n){
        map<string,int>m;
        int ans=0;
        for(int i=0;i<n;i++){
            m[list[i]]++;
        }
        for(auto u:m){
            if(u.second==2)ans++;
        }
        return ans;

 }
int main()
{
    int t,n;
  
       
        cin>>n;

        //
        string list[n];

        for(int i=0;i<n;i++){
              /*string s;
            cin>>s;*/
            //list.push_back(s);
            //m[s]++;
            cin>>list[i];
        }

        cout<<countWords(list,n)<<endl;

     
    
 




}