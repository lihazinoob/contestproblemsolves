//Problem Link: https://codeforces.com/problemset/problem/1848/A

#include<iostream>
using namespace std;
int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    int n,m,k;
    cin>>n>>m>>k;
    int a,b;
    cin>>a>>b;
    int flag = 1;
    for(int i = 0;i<k;i++)
    {
      int xx,yy;
      cin>>xx>>yy;
      if((a+b)%2 == (xx+yy)%2 )
      {
        flag = 0;
      }
      
    }
    if(flag)
    {
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }

  }
  return 0;
}