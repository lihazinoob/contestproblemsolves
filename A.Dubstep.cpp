//Problem Link : https://codeforces.com/problemset/problem/208/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  string ans;

  for(int i = 0;i<s.size();)
  {
    if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
    {
      ans.push_back(' ');
      i = i+3;
    }
    else
    {
      ans.push_back(s[i]);
      i = i+1;
    }
  }

  cout <<ans;




  //cout<<ans;
  //cout<<ans.size();
  return 0;
}