#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 
int t;
cin>>t;

while(t--){

	long long int n,k,x;
	cin>>n>>k>>x;

	//int sum=0,c=0;


		if(k*(k+1)/2 > x or (2*n-k+1)*k/2 < x){
			cout << "NO\n";
		}
    else {
    	cout<<"YES"<<endl;
	}

	



}
 return 0;

}
