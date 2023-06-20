#include <bits/stdc++.h> 
using namespace std;
int atoi(string str) {
    int sum=0,f=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>=48 && str[i]<=57)
        sum=sum*10+(str[i]-'0');
    }
    if(str[0]=='-')
    sum=-1*sum;
    return sum;
}