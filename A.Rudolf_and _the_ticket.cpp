#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,k;
    cin>>n>>m>>k;
    int b[n];
    int c[m];
    int count  = 0;
    for(int i = 0;i<n;i++)
    {
      cin>>b[i];
    }
    //sort(b,b+n);
    for(int i = 0;i<m;i++)
    {
      cin>>c[i];
    }
    //sort(c,c+n);
    for(int i = 0;i<n;i++)
    {
      for(int j = 0;j<m;j++)
      {
        if((b[i] + c[j])<=k)
        {
          ++count;
        }
        
      }
    }
    cout<<count<<endl;



  }



  return 0;
}