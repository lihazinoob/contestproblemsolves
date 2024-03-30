//Problem Link : https://codeforces.com/contest/1950/problem/E

#include<bits/stdc++.h>
using namespace std;
vector<int> divisors;
void getdivisor(int n)
{
  for(int i = 1;i*i<=n;i++)
  {
    if(n%i == 0)
    {
      divisors.push_back(i);

      //for distinct divisors
      if((n/i) !=i)
      {
        divisors.push_back(n/i);
      }
    }
  }
  sort(divisors.begin() ,divisors.end());
}


bool checkstring (string a ,string b)
{
  int count = 0;
  for(int i = 0;i<a.length();i++)
  {
    if(a[i] != b[i])
    {
      ++count;
    }
  }
  if(count > 1)
  {
    return false;
  }
  else
  {
    return true;
  }
}



void solve()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  getdivisor(n);

  for(auto &it : divisors)
  {
    string k1 = s.substr(0,it);
    string k2 = s.substr(n-it);


    //temporary string to store the value of k everytime

    string temp1 = "", temp2 = "";
    for(int i = 0;i<(n/it);i++)
    {
      temp1+=k1;
      temp2+=k2;
    }

    if(checkstring(temp1,s) || checkstring(temp2,s))
    {
      cout<<it<<endl;
      return;
    }
  }
}

int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    solve();
    divisors.clear();
  }
}