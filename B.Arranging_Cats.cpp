//problem link: https://codeforces.com/contest/1921/problem/B

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
    string s,f;
    cin>>s>>f;
    int onetozero = 0;
    int zerotoone = 0;
    for(int i = 0;i<n;i++)
    {
      if(s[i] == '0' && f[i] == '1')
      {
        zerotoone++;
      }
      else if(s[i] == '1' && f[i] == '0')
      {
        onetozero++;
      }
    }
    cout<<max(onetozero,zerotoone)<<endl;
  }
  return 0;
}