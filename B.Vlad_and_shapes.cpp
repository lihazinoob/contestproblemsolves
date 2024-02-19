//Problem Link: https://codeforces.com/contest/1926/problem/B

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

    int arr[n][n];
    //for taking input
    for(int i = 0;i<n;i++)
    {
      string s;
      cin>>s;

      for(int j = 0;j<n;)
      {
        for(int k = 0;k<s.size();k++)
        {
          if(s[k] == '0')
          {
            arr[i][j] = s[k];
            j++;
          }
          else
          {
            arr[i][j] = 1;
            j++;
          }
        }
      }

    }
    for(int i = 0;i<n;i++)
    {
      for(int j = 0;j<n;j++)
      {
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }

    int first1rowindex = 0;
   
    int con = 0;
    for(int i = 0;i<n;i++)
    {
      for(int j = 0;j<n;j++)
      {
        if(arr[i][j] == 1)
        {
          first1rowindex =i;
          con = 1;
          break;
          
        }
        else
        {
          continue;
        }
      }
      if(con == 1)
      {
        break;
      }
    }
    
    //cout<<first1rowindex<<endl;
    int cnt[2] = {0,0};
    int index = 0;
    for(int i = first1rowindex;i<= (first1rowindex+1);i++)
    {
      for(int j = 0;j<n;j++)
      {
        if(arr[i][j] == 1)
        {
          cnt[index] = cnt[index] +1;
        }
      }
      ++index;
    }

    if(cnt[0] == cnt[1])
    {
      cout<<"SQUARE"<<endl;
    }
    else
    {
      cout<<"TRIANGLE"<<endl;
    }
  
  return 0;
}
}