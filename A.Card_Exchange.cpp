//Problem Link : https://codeforces.com/contest/1966/problem/A


#include<bits/stdc++.h>
using namespace std;
int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    int n,k;
    cin>>n>>k;
    int c[n+1];
    for(int i = 1;i<=n;i++)
    {
      cin>>c[i];
    }
    sort(c+1,c+1+n);
    // for(int i = 1;i<=n;i++)
    // {
    //   cout<<c[i]<<" ";
    // }
    bool flag = false;
    for(int i = 1;i<=n-1;++i)
    {
      int cnt = 1;
      // cout<<"i = "<<i<<endl;
      for(int j = i+1;j<=n;j++)
      {
        // cout<<"j = "<<j<<endl;
        if(c[i] == c[j])
        {
          ++cnt;
          // cout<<"cnt = "<<cnt<<endl;
        }
        else
        {
          break;
        }

      }
      if(cnt == k)
      {
        flag = true;
        // cout<<"flag = "<<flag<<endl;
        break;
      }
      
    }
    // cout<<flag<<" ";
    if(flag)
    {
      cout<<k-1;
    }
    else
    {
      cout<<n;
    }
    cout<<endl;



  }


  return 0;
}