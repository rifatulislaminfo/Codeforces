#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    vector<string>v;
    char c;
    cin>>c;
    getline(cin,s);
    s=c+s;

    string temp;
    for(int i=0;i<s.size();i++){
        if(isspace(s[i])){
            v.push_back(temp);
            temp.clear();

        }
        else temp+=s[i];
    }
    v.push_back(temp);

    string ans;
    map<string,int>m;
    int max_f=0;
    for(auto u:v){
        m[u]++;

    max_f=max(max_f,m[u]);
    }
    for(auto u:v){
        if(m[u]==max_f){
            ans=u;
            break;
        }
    }

    cout<<ans<<" "<<max_f<<endl;




}