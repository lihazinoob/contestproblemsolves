//Problem Link: https://codeforces.com/problemset/problem/1850/D

#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
int main()
{
  int testcase;
  cin>>testcase;
  while (testcase--)
  {
    /* code */
    int n, k; 
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];    
    sort(all(a));
    int cnt = 1, ans = 1;

    for(int i = 1; i < n; ++i) 
    {
        if(a[i] - a[i - 1] > k) 
        {
          cnt = 1;
        } 
        else 
        {
          ++cnt;
        }
        ans = max(ans, cnt);
    }
    cout << n - ans << '\n';
  }
  


  return 0;
}