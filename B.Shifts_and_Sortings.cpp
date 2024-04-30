//Problem Link: https://codeforces.com/contest/1969/problem/B

#include<bits/stdc++.h>
using namespace std;
void joybangla()
{
  string s;
  cin>>s;
  int size = s.size();
  long long int ans = 0;
  long long int x = 0;
  for(int i = 0;i<size;++i)
  {
    if(s[i] == '1')
    {
      ++x;
    }
    else if(x == 0)
    {
      continue;
    }
    else
    {
      ans +=(x+ 1);
    }
  }
  cout<<ans<<endl;
}



int main()
{
  int testcase;
  cin>>testcase;
  while (testcase--)
  {
    /* code */
    joybangla();
  }
  


  return 0;
}