//Problem LINK: https://codeforces.com/contest/1921/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    cin>>x4>>y4;
    if(y1 == y2)
    {
      cout<<(x1-x2)*(x1-x2)<<endl;
    }
    else if(y1 == y3)
    {
      cout<<(x1-x3)*(x1-x3)<<endl;
    }
    else if(y1 == y4)
    {
      cout<<(x1-x4)*(x1-x4)<<endl;
    }
  }


  return 0;
}