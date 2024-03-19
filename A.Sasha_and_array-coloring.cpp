//Problem Link: https://codeforces.com/contest/1843/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
      cin>>arr[i];
    }
    //sorted array
    sort(arr,arr+n);
    int leftpointer = 0;
    int rightpointer = n-1;
    int total = 0;
    while(leftpointer<=rightpointer)
    {
      total = total + arr[rightpointer] -arr[leftpointer];
      leftpointer++;
      rightpointer--;
    }
    cout<<total<<endl;
  }
  return 0;
}