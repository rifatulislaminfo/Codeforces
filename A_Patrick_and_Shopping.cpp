/* Bismillah
 * author:  rifat0731
 * created: 17.10.2023
 */ 
#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long d1,d2,d3,s1,s6,n,m,k,s2,s3,s4,s5;
    cin>>d1>>d2>>d3;

    s1=(d1*2)+(d2*2);
    s2=(d1*2)+d3+d2;
    s3=(d2*2)+d3+d1;

    s4=(d2*2)+(d3*2);
    s5=(d1*2)+(d3*2);
    s6=d1+d2+d3;



    k=min(min(s1,s2),s3);
    if(k>s4 || k>s5 || k>s6){
        cout<<min(min(s4,s5),s6)<<endl;
    }
    else{
        cout<<k<<endl;
    }

}