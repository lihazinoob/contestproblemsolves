//Problem Link : https://codeforces.com/problemset/problem/1475/B
#include<iostream>
using namespace std;
int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    int n;
    cin>>n;
    int y = 0;
    
    if(n%2020 == 0)
    {
      cout<<"YES"<<endl;
    }
    else if(n%2021 == 0)
    {
      cout<<"YES"<<endl;
    }
    else 
    {
      int flag = 0;
      while((n-(2021*y)) > 0)
      {
        if(((n-2021*y)%2020) == 0)
        {
          flag = 1;
          break;
        }
        else
        {
          flag = 0;
          y++;
          continue;
        }
      }
      if(flag == 1)
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