#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 
	double a;
	long double ans;

	cin>>a;

	ans=3.141592653*(a*a);
	cout<<fixed<<setprecision(9)<<ans<<endl;

	return 0;
 
 
}