#include<bits/stdc++.h>
using namespace std;
long long int divval = 1e9+7;
#define ll long long
ll largest_subarray(int arr[],int n,int k)
{
  ll largestsum = 0;
  for(int i = n;i>=1;--i)
  {
    // cout<<i<<" "<<arr[i]<<endl;
    if(arr[i] >= 0)
    {
      largestsum+=arr[i];
    }
    else
    {
      break;
    }
  }
  // cout<<largestsum<<endl;
  return largestsum;
}

void solve()
{
  int n,k;
  cin>>n>>k;
  int arr[n+1];
  ll originalsum = 0;
  for(int i = 1;i<=n;i++)
  {
    cin>>arr[i];
    originalsum += arr[i];
  }
  sort(arr+1,arr+n+1);
  ll largestsum = largest_subarray(arr,n,k);
  // cout<<largestsum;
  for(int i = 1;i<=k;i++)
  {
    originalsum  = (originalsum + largestsum) % divval;
    // cout<<largestsum<<endl;
    largestsum = (2 * largestsum) %divval;
    // cout<<largestsum<<endl;
  }
  // originalsum = originalsum + k*largestsum;
  // cout<<originalsum;
  cout<<((originalsum % divval) + divval) % divval;

}


int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    solve();
  }

  return 0;
}