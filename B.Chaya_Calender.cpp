//Problem Link: https://codeforces.com/contest/1932/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
      cin>>arr[i];
    }
    int year = 0;
    for(int i = 0;i<n;i++)
    {
      int mul = 1;
      while(true)
      {
        if((arr[i] * mul )>year)
        {
          year = (arr[i] * mul );
          break;
        }
        else
        {
          ++mul;
        }
      }
    }
    cout<<year<<endl;
  }


  return 0;
}