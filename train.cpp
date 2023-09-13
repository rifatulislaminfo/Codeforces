#include<iostream>
using namespace std;

int main(){
long long t;

	cin>>t;

	long long r=t/4;

	long long c=t%4;
	if(r%2==0){
		cout<<r<<' '<<c<<'\n';
	}
	else{
		cout<<r<<' '<<3-c<<'\n';
	}

	    return 0;
}