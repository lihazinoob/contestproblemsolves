//Problem Link : https://codeforces.com/problemset/problem/1373/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    string s;
    cin>>s;
    int len = s.size();
    int count0 = 0;
    int count1 = 0;
    for(int i = 0;i<len;i++)
    {
      if(s[i] == '1')
      {
        ++count1;
      }
      else if(s[i] == '0')
      {
        ++count0;
      }
    }
    //cout<<count1<<endl<<count0<<endl;
    int minval = min(count0,count1);
    if(minval%2 == 1)
    {
      cout<<"DA"<<endl;
    }
    else
    {
      cout<<"NET"<<endl;
    }
  }
  return 0;
}