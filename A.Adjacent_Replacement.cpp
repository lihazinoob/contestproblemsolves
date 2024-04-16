// Problem Link : https://codeforces.com/contest/1006/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i)
  {
    int x;
    cin >> x;
    cout << x - !(x & 1) << " ";
  }

  return 0;
}