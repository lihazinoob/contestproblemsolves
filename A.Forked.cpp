//Problem Link: https://codeforces.com/problemset/problem/1904/A

#include<bits/stdc++.h>
using namespace std;
int xpos[4] = {-1,1,-1,1};
int ypos[4] = {-1,-1,1,1};
int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    int a,b,xk,yk,xq,yq;
    cin>>a>>b>>xk>>yk>>xq>>yq;
    set<pair<int,int>>s1,s2;
    for(int i = 0;i<4;i++)
    {
      s1.insert({xk + xpos[i]*a , yk + ypos[i]*b});
      s2.insert({xq + xpos[i]*a , yq + ypos[i]*b});
      s1.insert({xk + xpos[i]*b , yk + ypos[i]*a});
      s2.insert({xq + xpos[i]*b , yq + ypos[i]*a});
    }
    int ans = 0;
    for(auto x : s1)
    {
      if(s2.find(x) != s2.end())
      ans++;
    }
    cout << ans << '\n';

  }



  return 0;
}