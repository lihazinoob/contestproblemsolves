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
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
      int var;
      cin>>var;
      if(var>=0)
      {
        sum = sum+var;
      }
      else
      {
        sum = sum + abs(var); 
      }

    }
    cout<<sum<<endl;

  }
  return 0;
}