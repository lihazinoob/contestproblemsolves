//Problem Link: https://codeforces.com/contest/1957/problem/B

#include<bits/stdc++.h>
using namespace std;

int maxsetbits(int l)
{
  int x = log2(l);
  return pow(2,x) -1;
}

void solve()
{
  int n,k;
  cin>>n>>k;
  if(n == 1)
  {
    cout<<k<<endl;
    return;
  }
  int x= maxsetbits(k+1);
  cout<<x<<" ";
  cout<<(k-x)<<" ";
  for(int i = 0;i<n-2;i++)
  {
    cout<<"0"<<" ";
  }
  cout<<endl;
  
  return;
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