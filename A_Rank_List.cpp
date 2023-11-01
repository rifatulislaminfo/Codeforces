/* Bismillah
 * author:  rifat0731
 * created: 01.11.2023
 */ 
#include<bits/stdc++.h>
using namespace std;
bool cmd(pair<int,int>&v1,pair<int,int>&v2){
    if(v1.first>v2.first) return 1;
    else if(v1.first==v2.first) return(v1.second<v2.second);
    return 0;
}
int main()

{
    int a,b;
    cin>>a>>b;
    int count=0;

    vector<pair<int,int>>v(a);

    for(int i=0;i<a;i++){
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(),v.end(),cmd);

    for(auto u:v){
        if(u==v[b-1])count++;
    }
    cout<<count<<endl;
    return 0;

}

