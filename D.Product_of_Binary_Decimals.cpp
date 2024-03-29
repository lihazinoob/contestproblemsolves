//Problem Link: https://codeforces.com/contest/1950/problem/D

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
    vector<int>decint;
    decint.push_back(10);
    decint.push_back(11);
    int i = 0;
    while (true)
    {
      /* code */
      if(i>=decint.size())
      {
        break;
      }
      int x = decint[i]*10;
      int y = x+1;
      if(x<=n)
      {
        decint.push_back(x);
      }
      if(y<=n)
      {
        decint.push_back(y);
      }
     
      ++i;
    }
    /*
    for(int i = 0;i<decint.size();i++)
    {
      cout<<decint[i]<<endl;
    }
    */
    reverse(decint.begin(),decint.end());
    while(n>1)
    {
      bool ok = false;
      for(int i = 0;i<decint.size();i++)
      {
        if(n%decint[i] == 0)
        {
          n = n/ decint[i];
          ok = true;
        }
      }
      if(!ok)
      {
        break;
      }
    }

    if(n ==1)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
    
  }


  return 0;
}