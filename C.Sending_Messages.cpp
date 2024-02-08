//Problem Link: https://codeforces.com/contest/1921/problem/C


#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int n,f,a,b;
    cin>>n>>f>>a>>b;

    int m[n+1];
    m[0] = 0;
    for(int i = 1;i<=n;i++)
    {
      cin>>m[i];
      
      if(((m[i] -m[i-1])*a)<=b)
      {
        f = f- ((m[i] -m[i-1])*a);
      }
      else if(((m[i] -m[i-1])*a)>b)
      {
        f = f- b;
      }
    }
    if(f>0)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
  }


  return 0;
}