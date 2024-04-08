//Problem Link: https://codeforces.com/contest/1955/problem/A

#include<bits/stdc++.h>
using namespace std;

int nonsale(int n,int a,int b)
{
  int nonsaleprice = n *a;
  return nonsaleprice;
}
int sale(int n,int a,int b)
{
  int saleprice = 0;
  if(n%2 == 0)
  {
    saleprice = saleprice +(n/2) * b;
  }
  else
  {
    saleprice = saleprice + (n/2) * b + a;
  }
  return saleprice;
}
void solve()
{
  int n,a,b;
  cin>>n>>a>>b;
  int saleprice = sale(n,a,b);
  int nonsaleprice =nonsale(n,a,b);
  if(saleprice>nonsaleprice)
  {
    cout<<nonsaleprice<<endl;
  }
  else
  {
    cout<<saleprice<<endl;
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