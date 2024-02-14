//Problem Link: https://codeforces.com/problemset/problem/337/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int f[m];
  for(int i = 0;i<m;i++)
  {
    cin>>f[i];
  }
  int minimum = 1000000;
  sort(f,f+m,greater<int>());
  

  for(int i = 0;i<=(m-n);i++)
  {
    int temp = f[i] - f[i+n-1];
    minimum = min(minimum,temp);
  }
  cout<<minimum;


  return 0;
}