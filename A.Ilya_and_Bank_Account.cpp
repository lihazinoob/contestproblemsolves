//Problem Link: https://codeforces.com/problemset/problem/313/A

#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  if(n>=0)
  {
    cout<<n;
  }
  else
  {
    int first = n/10;
    int second = (n/100)*10 + n%10;
    if(first>second)
    {
      cout<<first;
    }
    else
    {
      cout<<second;
    }
  }

  return 0;
}