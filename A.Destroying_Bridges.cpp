//Problem Link: https://codeforces.com/contest/1944/problem/A
#include<iostream>
using namespace std;
int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    int n,k;
    cin>>n>>k;
    if((n-1) <= k ) //from node 1 there is n-1 bridges
    {
      cout<<1<<endl;
    }
    else
    {
      cout<<n<<endl;
    }
  }



  return 0;
}