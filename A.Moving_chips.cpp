//Problem Link: https://codeforces.com/contest/1923/problem/A

#include<iostream>
using namespace std;
int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    int n;
    cin>>n;
    int arr[n];
    //int index = 0;
    int first1 = 0;
    int last1 = 0;
    int innercount = 0;
    for(int i = 0;i<n;i++)
    {
      cin>>arr[i];
    }
    
    for(int i = 0;i<n;i++)
    {
      if(arr[i] == 1)
      {
        first1 =i;
        break;
      }
    }
    
    
    for(int i = n-1;i>=0;i--)
    {
      if(arr[i] == 1)
      {
        last1 = i;
        break;
      }
    }
    //cout<<last1;
    //cout<<first1<<endl<<last1<<endl;
  
    int index =0;

    for( index = first1;index<=last1;)
    {
      if(arr[index] == 1)
      {
        index = index+1;
        while((index<=last1) && (arr[index] != 1) )
        { 
          ++innercount;
          ++index;
        }
      }
      
      
    }
    cout<<innercount<<endl;
    
  }


  return 0;
}