#include <bits/stdc++.h> 
int maximumXor(vector<int> arr)
{
    set<int>s;
     int maxx=0,mask = 0;
     for(int i=30;i>=0;i--)
     {
         mask|=(1<<i);
         for(int j=0;j<arr.size();j++)
         {
            s.insert(arr[j]&mask);

         }
         int newmax = maxx  |(1<<i);
         for(int prefix :s)
         {
             if(s.count(newmax^prefix))
             {
                 maxx= newmax;
                 break;
             }
         }
         s.clear();
     }
   
   return maxx;

}