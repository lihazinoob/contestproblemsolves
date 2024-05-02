#include<bits/stdc++.h>
using namespace std;
void solve()
{
      int x;
      cin>>x;
      int ans = 0;
      int a[x];
      for(int i = 1;i<x;i++)
      {
            int temp = gcd(x,i) + i;
            // cout<<temp<<endl;
            // ans = max(ans,temp);
            a[i]=temp;
      }
      // cout<<ans<<endl;
      sort(a,a+x);
      cout<<(x-gcd(x,x-1))<<endl;
      
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