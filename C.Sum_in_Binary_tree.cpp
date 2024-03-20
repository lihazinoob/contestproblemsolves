//problem Link: https://codeforces.com/contest/1843/problem/C
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int testcase;
  cin>>testcase;
  while (testcase--)
  {
    unsigned long long int n;
    cin>>n;
    unsigned long long int sum = 0;
    while(n>=1)
    {
      sum = sum + n;
      n = floor(n/2);
    }
    cout<<sum<<endl;
  }
  return 0;
}