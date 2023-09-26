#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 
int t;
int c=0;
 
cin>>t;
while(t--){
	int n,k;
	cin>>n;
	cin>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
 
	for(int i=0;i<n;i++){
		if(arr[i]==k){
			c++;
			break;
 
		}
	}
	if(c==1){
		cout<<"YES"<<endl;
		c=0;
	}
	else{
		cout<<"NO"<<endl;
		c=0;
	}
 
 
}
 
 return 0;
 
}
