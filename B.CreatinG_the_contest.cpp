// Problem Link: https://codeforces.com/contest/1029/problem/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[n + 1];
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  int temp = 0;
  int ans = 0;
  for (int i = 1; i <= n; ++i)
  {
    int j = i;
    while (j + 1 <= n && a[j + 1] <= a[j] * 2)
    {
      ++j;
    }
      
    ans = max(ans, j - i + 1);
    i = j;
  }
  cout << ans;

  return 0;
}