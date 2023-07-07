#include <bits/stdc++.h> 
using namespace std;
int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at,at+n);
    sort(dt,dt+n);

    int i=0,j=0,maxi=0,cnt=0;

    while(i<n && j<n)
    {
        if(at[i]<=dt[j])
        {
            cnt++;
            i++;
        }
        else{
            j++;
            cnt--;
        }
        maxi = max(maxi,cnt);
    }
    return maxi;
}