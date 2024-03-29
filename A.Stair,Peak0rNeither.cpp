#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    /* code */

    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && b<c)
    {
      cout<<"STAIR"<<endl;
    }
    else if(b>c && b>a)
    {
      cout<<"PEAK"<<endl;
    }
    else
    {
      cout<<"NONE"<<endl;
    }
  }
  


  return 0;
}