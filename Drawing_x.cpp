#include<iostream>
using namespace std;
int main()
{

	 int n;

	 cin>>n;
	 int a=(n/2)+1;
	 int b=n+1;

	 for(int i=1;i<=n;i++){
	 	for(int j=1;j<=n;j++){
	 		if(i==a && j==a){
	 			cout<<"X";
	 		}
	 		else if(i==j){
	 			cout<<'\\';
	 		}
	 		else if(i+j==b){
	 			cout<<'/';
	 		}
	 		else{
	 			cout<<"*";
	 		}
	 	}
	 	cout<<endl;
	 }
	

return 0;
}