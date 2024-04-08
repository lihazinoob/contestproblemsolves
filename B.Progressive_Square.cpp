#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,c,d;
  cin>>n>>c>>d;
  int size = n*n;
  int arr[size];
  bool rowvisited[size];
  bool colvisited[size];
  for(int i = 0;i<size;i++)
  {
    cin>>arr[i];
    rowvisited[i] = false;
    colvisited[i] = false;
  }
  sort(arr,arr+size);
  int min = arr[0];
  // cout<<min; 
  for(int i = 0;i<size;i++)
  {
    // rowvisited[i] =true;
    int low = arr[i] - c;
    // cout<<low<<endl;
    int high = arr[i] + c;
    //  cout<<high<<endl;
    for(int j = 0;j<size;j++)
    {
      
      if(arr[j] == high)
      {
        
        rowvisited[j] = true;
      }
    }
    if(low>=min)
    {
      for(int j = 0;j<size;j++)
      {
        if(arr[j] == low)
        {
          rowvisited[j] = true;
          
        }
      }
    }
    
  }
  // for(int i = 0;i<size;i++)
  // {
  //   if(rowvisited[i])
  //   {
  //     cout<<i<<endl;
  //   }
  // }
  for(int i = 0;i<size;i++)
  {
    colvisited[i] =true;
    int low = arr[i] -d;
    int high = arr[i] +d;
    if(low>min)
    {
      for(int j = 0;j<size;j++)
      {
        if(arr[j] == low)
        {
          rowvisited[j] = true;
          
        }
      }
    }
    for(int j = 0;j<size;j++)
    {
      if(arr[j] == high)
      {
        rowvisited[j] == true;
        break;
      }
    }
  }
  bool allrow = false;
  for(int i = 0;i<size;i++)
  {
    if(rowvisited[i])
    {
      allrow =true;
    }
    else
    {
      break;
    }
  }

  bool allcol = false;
  for(int i = 0;i<size;i++)
  {
    if(colvisited[i])
    {
      allcol =true;
    }
    else
    {
      break;
    }
  }
  if(allrow && allcol)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    solve();
  }


  return 0;
}