#include <bits/stdc++.h> 
using namespace std;
int compareVersions(string a, string b) 
{
    int n = max(a.size(),b.size());
    a+=".";
    b+=".";
    vector<long long int>ans1,ans2;
    
    if(a == b)
    return 0;
    
    long long int sum=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='.')
        { 
           ans1.push_back(sum);
           sum=0;
        }
        else
        {
            sum = sum*10+(a[i]-'0');
        }
    }
    sum=0;
    for(int i=0;i<b.size();i++)
    {
        if(b[i]=='.')
        { 
           ans2.push_back(sum);
           sum=0;
        }
        else
        {
            sum = sum*10+(b[i]-'0');
        }
    } 
    long long int diff = ans1.size()-ans2.size();
    if(ans1.size()>ans2.size())
    {
        for(int i=0;i<diff;i++)
        {
            ans2.push_back(0);
        }
    }
    else
    {
        for(int i=0;i<diff*-1;i++)
        {
            ans1.push_back(0);
        }
    }

        
     for(int i=0;i<max(ans1.size(),ans2.size());i++)
    {
        if(ans1[i]>ans2[i])
        return 1;

        if(ans1[i]<ans2[i])
        return -1;
    }

    return 0;
}