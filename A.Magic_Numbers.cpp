//Problem Link: https://codeforces.com/problemset/problem/320/A


#include<bits/stdc++.h>
using namespace std;
bool is_magical(string number)
{
  int n = number.length();
  for(int i = 0;i<n;i++)
  {
    if(number[i] == '1')
    {
      if(i+1<n && number[i+1] == '4')
      {
        if(i+2<n && number[i+2] == '4')
        {
          i+=2;
        }
        else
        {
          i++;
        }
      }
    }
    else
    {
      return false;
    }
  }
  return true;

}

int main()
{
  string s;
  cin>>s;
  if(is_magical(s))
  {
    cout<<"YES";
  }
  else
  {
    cout<<"NO";
  }

  return 0;
}