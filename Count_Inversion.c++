#include <bits/stdc++.h> 
using namespace std;
int merge(long long *arr , int low , int mid , int high)

{
  vector<int>temp;
  int left = low;
  int right = mid+1;
  int count=0;
  while(left <=mid && right <= high)

  {
    if(arr[left] <= arr[right])
    {
        temp.push_back(arr[left]);
        left++;
    }
    else
    {
        temp.push_back(arr[right]);
        count=count+(mid-left+1);
        right++;
    }
  }
    while(left <= mid)
  {
      temp.push_back(arr[left]);
        left++;
  }

      while(right <= high)   
     {
      temp.push_back(arr[right]);
      right++;
    }

  for(int i=low ; i<=high ; i++)

  {
      arr[i] = temp[i - low];
  }

  return count;
 
}

int mergesort(long long *arr, int low, int high)
{ 

    int count=0;
    if(low == high)return count;

 

   int mid=(low+high)/2; 

   count = count + mergesort(arr , low , mid);

   count = count + mergesort(arr , mid+1 , high);

   count = count + merge(arr , low , mid , high); 

   return count;

}

 

long long getInversions(long long *arr, int n)
{
  return mergesort(arr, 0 , n-1);

}