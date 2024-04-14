//Problem Link : https://codeforces.com/contest/1956/problem/B

#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  int naveed[n+1];
  for(int i = 1;i<=n;i++)
  {
    cin>>naveed[i];
  }
  sort( naveed+1,naveed + n + 1);
  // for(int i = 1;i<=n;i++)
  // {
  //   cout<<naveed[i]<<" ";
  // }
  int i = 1;
  int ans = 0;
  for(int i = 1;i<n;i++)
  {
    if(naveed[i] == naveed[i+1])
    {
      ++ans;
    }
  }
  cout<<ans<<endl;
}




int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    solve();
  }


  return 0;
}