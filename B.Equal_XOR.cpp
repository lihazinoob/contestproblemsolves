//Problem Link: https://codeforces.com/contest/1944/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    int n,k;
    cin>>n>>k;
    vector<int>position[n+1]; //to store the position of each element.
    vector<int>single ,doubleL ,doubleR;
   
   
    //using array of vector 'position' to store the position of each element in the input array.
    for(int i = 1;i<=(2*n);i++)
    {
      int x;
      cin>>x;
      position[x].push_back(i);
    }

    for(int i = 1; i<=n ;i++)
    {
      if(position[i].back() <= n)
      {
        doubleL.push_back(i);
      }
      else if(position[i].front() > n)
      {
        doubleR.push_back(i);
      }
      else
      {
        single.push_back(i);
      }
    }


    vector<int>L,R;

    for(int i = 0;i<min({doubleL.size(), doubleR.size(), (size_t)k});i++)
    {
      L.push_back(doubleL[i]);
      L.push_back(doubleL[i]);
      R.push_back(doubleR[i]);
      R.push_back(doubleR[i]);
    }

    for(int i = 0;i<single.size();i++)
    {
      if(L.size() == 2*k)
      {
        break;
      }
      L.push_back(single[i]);
      R.push_back(single[i]);
    }

    for(auto i:L)
    {
      cout<<i<<" ";
    }
    cout<<endl;

    for(auto i:R)
    {
      cout<<i<<" ";
    }
    cout<<endl;

  
  }




  return 0;
}