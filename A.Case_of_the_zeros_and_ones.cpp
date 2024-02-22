//Problem Link: https://codeforces.com/problemset/problem/556/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  int cnt0 = 0;
  int cnt1 = 0;
  for(int i = 0;i<n;i++)
  {
    if(s[i] == '1')
    {
      ++cnt1;
    }
    else if(s[i] == '0')
    {
      ++cnt0;
    }
  }  
  cout<<(n-2*min(cnt0,cnt1));
  return 0;
}