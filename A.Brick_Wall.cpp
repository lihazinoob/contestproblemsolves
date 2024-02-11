//Problem Link: https://codeforces.com/contest/1918/problem/A

#include<iostream>
using namespace std;
int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    int n,m;
    cin>>n>>m;
    cout<<(n*(m/2))<<endl;
  }
  return 0;
}