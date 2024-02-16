//Problem Link : https://codeforces.com/problemset/problem/1343/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    int n;
    cin>>n;
    for(int k  = 2;k<=29;k++)
    {
      unsigned int power = (pow(2,k)-1); 
      if(n % power == 0)
      {
        cout<< (n/power)<<endl;
        break;
      }
      else
      {
        continue;
      }
    }
  }
  return 0;
}