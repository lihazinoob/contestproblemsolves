// Problem Link : https://www.hackerrank.com/challenges/printing-pattern-2/problem

#include <bits/stdc++.h>
using namespace std;
int main()
{
 
  int n;
  scanf("%d", &n);
  int row, col;
  int x;

  for (row = 1; row <= 2 * n - 1; row++)
  {
    for (col = 1; col <= 2 * n - 1; col++)
    {
      for (x = 1; x <= 2 * n - 1; x++)
      {
        if ((row == x || row == 2 * n - x) || (col == x || col == 2 * n - x))
        {
          printf("%d ", n + 1 - x);
          break;
        }
      }
    }
    printf("\n");
  }

  return 0;
}