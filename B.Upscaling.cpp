//Problem Link: https://codeforces.com/contest/1950/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    /* code */
    int n;
    cin>>n;
    string first = "";
    string second = "";
    bool indicator = false;
    for(int i = 0;i<2*n;i = i+2)
    {
      if(indicator == false)
      {
        first.push_back('#');
        first.push_back('#');
        second.push_back('.');
        second.push_back('.');
        indicator = true;
      }
      else if(indicator == true)
      {
        first.push_back('.');
        first.push_back('.');
        second.push_back('#');
        second.push_back('#');
        indicator = false;
      }
    }
    bool ind = false;
    for(int j = 0;j<2*n;j = j+2)
    {
      if(ind == false)
      {
        cout<<first<<endl;
        cout<<first<<endl;
        ind = true;
      }
      else if(ind == true)
      {
        cout<<second<<endl;
        cout<<second<<endl;
        ind = false;
      }
    }

  }

  return 0;
}