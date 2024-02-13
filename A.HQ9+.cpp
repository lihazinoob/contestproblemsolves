//Problem Link : https://codeforces.com/problemset/problem/133/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int size = s.size();
  int flag = 0;
  for(int i = 0;i<=size;i++)
  {
    if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
    {
      flag = 1;
      break;
    }
    else{
      flag = 0;
    }
  }
  if(flag)
  {
    cout<<"YES";
  }
  else
  {
    cout<<"NO";
  }

  return 0;
}