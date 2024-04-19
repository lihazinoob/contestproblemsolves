//Problem Link: https://www.codechef.com/problems/STONES


#include<bits/stdc++.h>
using namespace std;

void solve()
{
  string j;
  cin>>j;
  string s;
  cin>>s;
  int cnt = 0;
  bool visited_s[s.size()] = {false};
  for(int i = 0;i<j.size();++i)
  {
    for(int k = 0;k<s.size();k++)
    {
      if(j[i] == s[k])
      {
        if(visited_s[k] == false)
        {
          ++cnt;
          visited_s[k] = true;
        }
        else
        {
          continue;
        }
        

      }
    }
  }
  cout<<cnt<<endl;


}

int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    solve();
  }

  return 0;
}