//Problem Link: https://codeforces.com/problemset/problem/1335/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    for(int i = 0;i<n;i++)
    {
      cout << char('a' + i % b);
    }
    cout<<endl;
  }
  return 0;
}