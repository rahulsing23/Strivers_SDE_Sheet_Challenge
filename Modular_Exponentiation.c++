
#include <bits/stdc++.h> 
using namespace std;
long long int modularExponentiation(int x, int n, int m) {
	 if(n==0)return 1;

	x = x%m;
	long long int temp = modularExponentiation(x,n/2,m);
	if(n&1)
	return (((temp*temp)%m)*x)%m;
	else
	return (temp*temp)%m;
}