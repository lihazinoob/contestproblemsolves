#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    char arr[n];
    int coin = 0;
    for(int i = 0;i<n;i++)
    {
      cin>>arr[i];
    }
    for(int i = 1;i<n;i++)
    {
      if(arr[i] == '@')
      {
        ++coin;
      }
      else if(arr[i] == '*')
      {
        if(arr[i+1] == '*')
        {
          break;
        }
        else
        {
          continue;
        }
      }
    }
    cout<<coin<<endl;

  }


  return 0;
}