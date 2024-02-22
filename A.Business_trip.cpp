//Problem Link: https://codeforces.com/problemset/problem/149/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k;
  cin>>k;
  int a[12];
  for(int i = 0;i<12;i++)
  {
    cin>>a[i];
  }
  sort(a,a+12);
  int sum = 0;
  int count = 0;
  //bool flag = false;
  int i;
  for(i = 11;i>=0;i--)
  {
    if(!(i<0))
    {
      if(sum<k)
      {
        sum+=a[i];
        //flag = true;
        ++count;
      }
      else
      {
        break;
      }
      
    }
    
  }
  
  if(i<0 && sum<k)
  {
    cout<<-1;
  }
  else
  {
    cout<<count;
  }
  
  
  
  


  return 0;
}