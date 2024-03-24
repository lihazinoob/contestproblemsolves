//Problem Link: https://codeforces.com/problemset/problem/567/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i = 0;i<n;i++)
  {
    int x;
    cin>>x;
    arr.push_back(x);
  }
  vector<vector<int>>pos;
  for(int i = 0;i<n;i++)
  {
    int temp = arr[i];
    for(int j = i+1;j<n;j++)
    {
      int dist = abs(temp - arr[j]);
      pos[i].push_back(dist);
    }
  }
  for(int i = 0;i<n;i++)
  {
    cout<<*min_element(pos[i].begin(),pos[i].end())<<" ";
    cout<<*max_element(pos[i].begin(),pos[i].end());
    cout<<endl;
  }
}