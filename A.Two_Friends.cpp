//Problem Link : https://codeforces.com/contest/1969/problem/A

#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  int best[n+1];
  for(int i = 1;i<=n;++i)
  {
    cin>>best[i];
  }
  int ans = 3;
  for(int i = 1;i<=n;++i)
  {
    if(i == best[best[i]])
    {
      ans = 2;
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