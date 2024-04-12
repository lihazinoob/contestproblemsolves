//Problem Link: https://codeforces.com/contest/1003/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++)
  {
    cin>>arr[i];
  }
  int pocket = 1;
  for(int i = 0;i<n-1;i++)
  {
    int tempans = 1;
    int element = arr[i];
    for(int j = i+1;j<n;j++)
    {
      if(element == arr[j])
      {
        ++tempans;
      }
    }
    pocket = max(pocket,tempans);
  }
  cout<<pocket;


  return 0;
}