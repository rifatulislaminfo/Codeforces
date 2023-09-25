#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
int n,s,k;
cin>>n;
int s1=0,s2=0,s3=0;
while(n>0){
	if(n>=365){
		s=n/365;
		n=n-(365*s);
		s1=s;
	}
	else if(n>=30){
		k=n/30;
		n=n-(30*k);
		s2=k;
	}
	else{
		s3=n;
		n=n-n;
	}
}
cout<<s1<<" years"<<endl<<s2<<" months"<<endl<<s3<<" days"<<endl;
 
 
 
 
 
 
 return 0;
}
