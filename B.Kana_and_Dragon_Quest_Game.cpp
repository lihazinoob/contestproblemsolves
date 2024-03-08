//Probelm Link : https://codeforces.com/problemset/problem/1337/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    int x,n,m;
    cin>>x>>n>>m;
    int temp =x;
    bool flag = false;
    while(temp>=20 && n>0)
    {
      temp = temp/2+10;
      n--;
    }
    while(temp>0 && m>0)
    {
      temp = temp -10;
      m--;
      if(temp<=0)
      {
        flag = true;
        break;
      }
      else
      {
        flag = false;
      }
    }
    if(flag == true)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
  }
}