//Problem Link: https://codeforces.com/contest/1015/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s,t;
  cin>>s>>t;
  vector<int>ans;
  for(int i = 0;i<n;i++)
  {
    if(s[i] == t[i])
    {
      continue;
    }
    int position = -1;
    //jokhon shoman hobe na

    for(int j = i+1;j<n;j++)
    {
      if(s[j] == t[i])
      {
        position = j;
        break;
      }
    }

    if(position == -1)
    {
      cout<<-1<<endl;
      return 0;
    }

    for(int j = position-1;j>=i;--j)
    {
      swap(s[j],s[j+1]);
      ans.push_back(j);
    }

  }


  assert(s == t);

  cout<<ans.size()<<endl;

  for(auto i:ans)
  {
    cout<<i+1<<" ";
  }
  cout<<endl;

  return 0;
}