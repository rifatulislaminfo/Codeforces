#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int a = 15, b = 20;
cout << __gcd(a, b) << '\n';
int lcm = a * b / __gcd(a, b);
cout << lcm << '\n';
return 0;
}