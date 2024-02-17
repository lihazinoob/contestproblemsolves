//Problem Link : https://codeforces.com/problemset/problem/1374/B

#include<iostream>
using namespace std;
int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    int n;
    cin>>n;
    int cnt2 = 0,cnt3 = 0;
    while(n%2 == 0) // 2 diye vag jacche
    {
      ++cnt2;
      n = n/2;
    }
    while(n%3 == 0)
    {
      ++cnt3;
      n/=3;
    }
    if(n == 1 && (cnt2<=cnt3))
    {
      cout<< cnt3-cnt2 + cnt3<<endl;
    }
    else
    {
      cout<<-1<<endl;
    }
  }
  return 0;
}