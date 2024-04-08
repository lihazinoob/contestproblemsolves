#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
void solve()
{
  ll a,b,m;
  cin>>a>>b>>m;
  ll ans = 0;
  ans = ans+ m/a + m/b + 2;
  cout<<ans<<endl;
}


int main()
{
  int testcase;
  cin>>testcase;
  while (testcase--)
  {
    /* code */
    solve();
  }
  



  return 0;
}