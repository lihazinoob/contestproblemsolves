//Problem Link: https://codeforces.com/contest/1954/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,k;
    cin>>n>>m>>k;
    int color[n];
    for(int i = 0;i<n;i++)
    {
      color[i] = i%m;
    }
    
    for(int i = 0;i<n;i++)
    {
      if(k>0)
      {
        if(color[i] != 0)
        {
          color[i] = 0;
          --k;
        }
        else
        {
          continue;
        }
      }
      else
      {
        break;
      }
    }
    bool flag = false;
    for(int i = 0;i<n;i++)
    {
      if(color[i] == 0)
      {
        flag = true;
      }
      else
      {
        flag = false;
        break;
      }
    }

    if(flag)
    {
      cout<<"NO"<<endl;
    }
    else
    {
      cout<<"YES"<<endl;
    }



  }


  return 0;
}