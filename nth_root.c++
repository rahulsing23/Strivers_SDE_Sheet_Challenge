#include<bits/stdc++.h>
using namespace std;

int NthRoot(int n, int m) {
  for(int i=1;i<=sqrt(m);i++)
  {
    if(pow(i,n)==m)
    return i;
  }
  return -1;
}