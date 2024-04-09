//Problem Link: https://codeforces.com/contest/978/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i = 0;i<n-1;i++)
  {
    for(int j = i+1;j<n;j++)
    {
      if(arr[i] == arr[j])
      {
        arr[i] = 0;
        break;
      }
      else
      {
        continue;
      }
    }
  }
  int ans = 0;
  for(int i = 0;i<n;i++)
  {
    if(arr[i] != 0)
    {
      ++ans;
    }
    else
    {
      continue;
    }
  }
  cout<<ans<<endl;
  for(int i = 0;i<n;i++)
  {
    if(arr[i]!=0)
    {
      cout<<arr[i]<<" ";
    }
  }
  cout<<endl;





  return 0;
}