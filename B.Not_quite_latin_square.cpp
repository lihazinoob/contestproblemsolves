//Problem Link : https://codeforces.com/contest/1915/problem/B

#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    char arr[3][3];
    int ca = 0;
    int cb = 0;
    int cc = 0;
    for(int i = 0;i<3;i++)
    {
      
      for(int j = 0;j<3;j++)
      {
        cin>>arr[i][j];
        if(arr[i][j] == 'A')
        {
          ca++;
        }
        else if(arr[i][j] == 'B')
        {
          cb++;
        }
        else if(arr[i][j] == 'C')
        {
          cc++;
        }
      }
    }
    //cout<<cb<<endl;
    if(ca==2)
    {
      cout<<'A'<<endl;
    }
    else if(cb == 2)
    {
      cout<<'B'<<endl;
    }
    else if(cc == 2)
    {
      cout<<'C'<<endl;
    }
    
  }
  return 0;
}