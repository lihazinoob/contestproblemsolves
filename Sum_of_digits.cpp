//Problem Link : https://www.codechef.com/problems/FLOW006

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int sum = 0;
    while(n != 0)
    {
      sum = sum +  (n%10);
      n = n/10;

    }
    cout<<sum<<endl;
  }


  return 0;
}