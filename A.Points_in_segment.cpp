// Priblem Link: https://codeforces.com/contest/1015/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, m;
  cin >> n >> m;
  bool visited[m + 1];
  for (int i = 1; i <= m; i++)
  {
    visited[i] = false;
  }
  int ans = 0;
  while (n--)
  {
    int first, last;
    cin >> first >> last;
    for (int i = first; i <= last; i++)
    {
      visited[i] = true;
    }
  }
  for (int i = 1; i <= m; i++)
  {
    if (visited[i] == false)
    {
      ++ans;
    }
  }
  cout << ans << endl;

  if (ans == 0)
  {
    cout << endl;
  }
  else
  {
    for (int i = 1; i <= m; i++)
    {
      if (visited[i] == false)
      {
        cout << i << " ";
      }
    }
  }

  return 0;
}