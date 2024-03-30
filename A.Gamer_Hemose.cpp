//Problem Link: https://codeforces.com/contest/1592/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
  int n,h;
  cin>>n>>h;
  int arr[n];
  for(int i = 0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);
  
  
  
  //int imm_total = imm_count * (max + second_max);

  ll c=0;
        c+=2*(h/(arr[n-1]+arr[n-2]));
        if(h%(arr[n-1]+arr[n-2])==0)c+=0;
        else if(h%(arr[n-1]+arr[n-2])<=arr[n-1])c++;
        else c+=2;
        cout<<c<<"\n";
  

  

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