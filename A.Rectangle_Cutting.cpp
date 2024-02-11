//Problem Link: https://codeforces.com/contest/1928/problem/A

#include<iostream>
using namespace std;
int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    int a,b;
    cin>>a>>b;
    if((a%2)!=0 &&(b%2)!=0)
    {
      cout<<"NO"<<endl;
    }
    else if((a%2)==0 &&(b%2)!=0)
    {
      if(((2*b)!=b)&&((a/2)!=a) &&((2*b)!=a) && ((a/2)!=b))
      {
        cout<<"YES"<<endl;
      }
      else 
      {
        cout<<"NO"<<endl;
      }
    }
    else if((a%2)!=0 &&(b%2)==0)
    {
      if(((2*a)!=a)&&((b/2)!=b) && ((2*a)!=b) && ((b/2)!=a))
      {
        cout<<"YES"<<endl;
      }
      else 
      {
        cout<<"NO"<<endl;
      }
    }
    else if((a%2)==0 &&(b%2)==0)
    {
      if(((2*b)!=b)&&((a/2)!=a) &&((2*b)!=a) && ((a/2)!=b))
      {
        cout<<"YES"<<endl;
      }
      else if(((2*a)!=a)&&((b/2)!=b) && ((2*a)!=b) && ((b/2)!=a))
      {
        cout<<"YES"<<endl;
      }
      else
      {
        cout<<"NO"<<endl;
      }

    }
  }


  return 0;
}