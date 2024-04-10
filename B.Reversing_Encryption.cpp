//Problem Link: https://codeforces.com/contest/999/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  
  //loop for finding the divisor
  for(int d = 2;d<=n;d++)
  {
    if(n % d == 0) //then d is a divisor of n
    {
      int start = 0;
      int end = d-1;
      //loop for reversing the determined substr
      while(start<=end)
      {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        --end;
      }
    }
  }
  cout<<s;



  return 0;
}