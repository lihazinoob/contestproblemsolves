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
    string s;
    cin>>s;
    int count  = 0;
    for(int i = 0;i<n;i++)
    {
      if(s[i] == 'm')
      {
        if(s[i+1] == 'a' && (i+1)<n)
        {
          if(s[i+2] == 'p' && (i+2)<n)
          {
            ++count;
            s[i] = '.';
            s[i+1] = '.';
            s[i+2] = '.';
          }
          else
          {
            continue;
          }
        }
        else
        {
          continue;
        }
      }
      else if(s[i] == 'p')
      {
        if(s[i+1] == 'i' && (i+1)<n)
        {
          if(s[i+2] == 'e' && (i+2)<n)
          {
            s[i] = '.';
            s[i+1] = '.';
            s[i+2] = '.';
            ++count;
          }
          else
          {
            continue;
          }
        }
        else
        {
          continue;
        }
      }
      else
      {
        continue;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}