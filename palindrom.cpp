#include <iostream>
#define nl '\n'
using namespace std;
int main(){
int num, mun = 0;
cin >> num;
int n = num;
while(num != 0){
int rem = num % 10;
mun = mun * 10 + rem;
num /= 10;
}
cout << mun << nl;
if(n == mun) cout <<"YES\n";
else cout << "NO\n";
return 0;
}