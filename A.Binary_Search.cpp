//Problem Link : https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A

#include<bits/stdc++.h>
using namespace std;
bool binarysearch(int low,int high,int compare,int num[])
{
  if(low>high)
  {
    return false;
  }

  int mid = (low + high) /2;

  if(num[mid] == compare)
  {
    return true;
  }

  else if(num[mid] < compare)
  {
    binarysearch(mid +1 ,high,compare,num);
  }
  else
  {
    binarysearch(low,mid -1, compare,num);
  }
  
}


int main()
{
  int n,k;
  cin>>n>>k;
  int num[n+1];
  int quer[k+1];
  for(int i = 1;i<=n;++i)
  {
    cin>>num[i];
  }
  for(int i = 1;i<=k;++i)
  {
    cin>>quer[i];
    int compare = quer[i];
    if(binarysearch(1,n+1,compare,num))
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
  }


  return 0;
}