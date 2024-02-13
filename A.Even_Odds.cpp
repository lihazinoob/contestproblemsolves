//Problem Link : https://codeforces.com/problemset/problem/318/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,k;
  cin>>n>>k;
  long long int c = (long long int)ceil(n/2.0);
  if(k<=c)
  {
    cout<<(2*k)-1;
  }
  else
  {
    cout<<2*(k-c);
  }
  return 0;
}