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
    int arr[n+1];
    for(int i = 1;i<=n;i++)
    {
      cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    
    int medpos = ceil(double(n)/2);
    int medval = arr[medpos];
    //cout<<endl<<medpos<<" "<<medval;
    
    int count = 1;
    for(int i = medpos+1;i<=n;i++)
    {
      if(medval == arr[i])
      {
        ++count;
      }
      else 
      {
        continue;
      }
    }
    cout<<count<<endl;
    
  }



  return 0;
}