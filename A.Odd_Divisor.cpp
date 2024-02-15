//Problem Link : https://codeforces.com/problemset/problem/1475/A

#include<iostream>
using namespace std;
int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    bool flag = false;
    long long int n;
    cin>>n;
    if(n%2!=0)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      long long int div = n;
      while(div!=1)
      {
        if(div%2==0)
        {
          div = div/2;
          flag = false;
          continue;
        }
        else
        {
          flag = true;
          break;
        }
      }
      if(flag)
      {
        cout<<"YES"<<endl;
      }
      else
      {
        cout<<"NO"<<endl;
      }
    }
  }
  return 0;
}