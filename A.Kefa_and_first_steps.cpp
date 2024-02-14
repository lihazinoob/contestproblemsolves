//Problem Link: https://codeforces.com/problemset/problem/580/A

#include<bits/stdc++.h>
using namespace std;
int main()
{ 
  int n;
  cin>>n;
  int a[n];
  for(int i = 0;i<n;i++)
  {
    cin>>a[i];
  }
  int count = 1;
  int maximum = 0;
  if(n == 1)
  {
    cout<<1;
  }
  else{
    for(int i = 0;i<(n-1);i++)
    {
    if(a[i+1]>=a[i])
    {
      count++;
      //maximum = count;
    }
    else{
      //maximum = max(maximum,count);
      count = 1; 
    }
    maximum = max(maximum,count);
  }
  cout<<maximum;
  }
  
  return 0;
}