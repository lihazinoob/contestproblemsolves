//Problem Link : https://codeforces.com/problemset/problem/460/A

#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int day = 1;
  while(n>0)
  {
    if(day%m ==0) //sock add hbe
    {
      
      day++;
    }
    else
    {
      day++;
      n--;
    }
  }
  cout<<day-1;


  return 0;
}