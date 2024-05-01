//Problem Link: https://codeforces.com/contest/1972/problem/A

#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin>>n;
  vector<int>a;
  vector<int>b;
  for(int i = 0;i<n;++i)
  {
    int x;
    cin>>x;
    a.push_back(x);

  }
  for(int i = 0;i<n;++i)
  {
    int x;
    cin>>x;
    b.push_back(x);
  }
  // for(int i = 0;i<n;++i)
  // {
  //   cout<<a[i]<<" ";
  // }
  int ans = 0;
  for(int i = 0;i<n;++i)
  {
    if(a[i] > b[i])
    {
      ++ans;
      a.pop_back();
      a.push_back(b[i]);
      sort(a.begin(),a.end());
    }

  }
  cout<<ans;




}
int main()
{
  int testcase;
  cin>>testcase;
  while (testcase--)
  {
    /* code */
    solve();
    cout<<endl;
  }
  
}