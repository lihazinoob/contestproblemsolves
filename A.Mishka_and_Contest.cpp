//Problem Link : https://codeforces.com/contest/999/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  vector<int>naveed;
  for(int i = 0;i<n;i++)
  {
    int x;
    cin>>x;
    naveed.push_back(x);
  }
  // for(int i = 0;i<n;i++)
  // {
  //   cout<<naveed[i]<<" ";
  // }
  int cnt = 0;
  int left = 0;
  int right = n-1;
  // cout<<left<<" "<<right;
  bool side = true; //true mane left side theke nibo
  while(left<=right)
  {
    if(naveed[left] <= k || naveed[right]<=k)
    {
       if(side ==true)
    {
      if(naveed[left] <= k)
      {
        ++left;
        ++cnt;
        side = false;
      }
      else
      {
        side = false;
      }
    }
    //right side theke
    else
    {
      if(naveed[right] <= k)
      {
        --right;
        ++cnt;
        side = true;
      }
      else
      {
        side = true;
      }
    }
    }

    else
    {
      break;
    }
    
   
    
  }
  cout<<cnt<<endl;


  return 0;
}