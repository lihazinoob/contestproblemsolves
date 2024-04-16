//Problem Link: https://codeforces.com/contest/1005/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s1,s2;
  cin>>s1;
  cin>>s2;
  int sizeof1 = s1.size();
  int sizeof2 = s2.size();
  if(sizeof1 >= sizeof2)
  {
    string minimumstr = s2; //s2 is the minimum lemgth string
    if(s1[sizeof1 -1] != s2[sizeof2 -1])
    {
      cout<<sizeof1 + sizeof2;
    }
    else
    {
      int ans = 0;
      int pointerofs1 = sizeof1 -1;
      int pointerofs2 = sizeof2 -1;
      while(pointerofs1 >= 0 && pointerofs2 >= 0)
      {
        if(s1[pointerofs1] == s2[pointerofs2])
        {
          ++ans;
          --pointerofs1;
          --pointerofs2;
        }
        else
        {
          break;
        }
      }
      cout<<sizeof1 +sizeof2 - 2*ans;
    }




  }

  else
  {
    string minimumstr = s1; //s1 is the minimum lemgth string
    if(s1[sizeof1 -1] != s2[sizeof2 -1])
    {
      cout<<sizeof1 + sizeof2;
    }
    else
    {
      int ans = 0;
      int pointerofs1 = sizeof1 -1;
      int pointerofs2 = sizeof2 -1;
      while(pointerofs1 >= 0 && pointerofs2 >= 0)
      {
        if(s1[pointerofs1] == s2[pointerofs2])
        {
          ++ans;
          --pointerofs1;
          --pointerofs2;
        }
        else
        {
          break;
        }
      }
      cout<<sizeof1 +sizeof2 - 2*ans;
    }




  }



  return 0;
}