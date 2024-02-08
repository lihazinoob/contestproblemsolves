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
    string s;
    cin>>s;
    int i = 0;
    int j = n-1;
    int firstpos = 0;
    int lastpos=0; 
    while(i<=j)
    {
      if(s[i] == 'B')
      {
        firstpos = i;
        if(s[j] == 'B')
        {
          lastpos = j;
          break;
        }
        else
        {
          j--;
        }
      }
      else
      {
        i++;
      }
      
    }
    if(i>j)
    {
      cout<<0<<endl;
    }
    else
    {
      cout<<(lastpos-firstpos+1)<<endl;
    }
  }

  return 0;
}