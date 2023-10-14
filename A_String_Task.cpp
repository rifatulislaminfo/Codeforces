/* Bismillah
 * author:  rifat0731
 * created: 15.10.2023
 */ 
#include<bits/stdc++.h>
using namespace std;


bool is_vowel(char c){
    return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||c=='y');
}
int main(){

    string s,ans;

    cin>>s;

    for(auto u:s){
        char c=tolower(u);
    
    if(!is_vowel(c)){
        ans+='.';
        ans+=c;
    }
    }
    cout<<ans<<endl;

   


}