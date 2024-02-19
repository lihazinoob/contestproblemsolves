#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    int cnta = 0;
    int cntb = 0;
    for(int i  = 0;i<s.size();i++)
    {
      if(s[i] == 'A')
      {
        cnta++;
      }
      else
      {
        cntb++;
      }
    }
    if(cnta>=cntb)
    {
      cout<<'A'<<endl;
    }
    else
    {
      cout<<'B'<<endl;
    }
  }


  return 0;
}