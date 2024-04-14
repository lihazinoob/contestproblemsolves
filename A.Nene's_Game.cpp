//Problem Link: https://codeforces.com/contest/1956/problem/A

#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int k,q;
  cin>>k>>q;
  int a[k+1];
  int n[q+1];

  for(int i = 1;i<=k;i++)
  {
    cin>>a[i];
  }
  sort(a+1,a+k+1);
  int minimumofa = a[1];
  //  cout<<minimumofa;
  for(int i = 1;i<=q;i++)
  {
    cin>>n[i]; //initially number of 1 holo current shongkhok
    int current  = n[i];
    // cout<<current;
    // for(int j = 1;j<=current;j++)
    // {
    //   cout<<temp[i]<<" "; 
    // }
    while(current >= minimumofa)
    {
      int tempcurrent = 0;
      for(int m = 1;m<=k;m++)
      {
        if(current >= a[m])
        {
          ++tempcurrent;
        }
      }
      current = current - tempcurrent;
    }
    

    cout<<current<<" ";

    


  }
  cout<<endl;




}



int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    solve();
  }

  return 0;
}