#include<iostream>
#include<cmath>
using namespace std;
int main()
{

 char a;

 cin>>a;

 int x=a;
 if(x>=97){
 	cout<<char(a-32)<<endl;
 }
 else{
 	 	cout<<char(a+32)<<endl;

 }

 return 0;
 
}