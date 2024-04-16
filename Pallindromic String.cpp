//Problem Link: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  // cout<<s;
  ll size = s.size();
  ll left = 0;
  ll right = size -1;
  bool flag = false;
  while(left<=right)
  {
    if(s[left] == s[right])
    {
      flag = true;
      ++left;
      --right;
    }
    else
    {
      flag = false;
      break;
    }
  }
  if(flag)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }


  return 0;
}