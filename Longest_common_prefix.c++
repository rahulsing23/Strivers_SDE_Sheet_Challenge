#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &arr, int n)
{
    sort(arr.begin(),arr.end());
    string s1=arr[0];
    string s2 = arr[n-1];
    int i;
    string str="";
    for(i=0;i<s1.size();i++)
    {
        if(s1[i]==s2[i])
        str+=s1[i];
        else
        break;
    }
    return str;
}


