//Problem Link: https://codeforces.com/problemset/problem/451/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  if(n>m)
  {
    swap(n,m);
  }
  if(n%2 == 0)
  {
    cout<<"Malvika";
  }
  else
  {
    cout<<"Akshat";
  }

  return 0;
}