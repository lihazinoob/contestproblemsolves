//Problem Link :https://codeforces.com/contest/988/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int arr[n+1];
  bool marked[n+1];
  vector<int>ans;
  for(int i = 1;i<=n;i++)
  {
    cin>>arr[i];
    marked[i] = false;
  }
  for(int i = 1;i<=n;i++)
  {
    if(marked[i] == false)
    {
      marked[i] = true;
      ans.push_back(i);
    }
    for(int j = i+1;j<=n;j++)
    {
      if(arr[i] == arr[j])
      {
        marked[j] = true;
      }
    }
  }
  if(ans.size()>=k)
  {
    cout<<"YES"<<endl;
    for(int i = 0;i<k;i++)
    {
      cout<<ans[i]<<" ";
    }
  }
  else
  {
    cout<<"NO"<<endl;
  }
  

  return 0;
}