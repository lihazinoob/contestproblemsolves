//Problem Link : https://codeforces.com/contest/988/problem/B

#include<bits/stdc++.h>
using namespace std;

int isSubstring(string s1, string s2)
{
  if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}


int main()
{
  int n;
  cin>>n;
  vector<string>vecs;
  vector<int>vecsize; // storig the size of each string
  vector<pair<int,string>>naveed;
  for(int i = 0;i<n;i++)
  {
    string s;
    cin>>s;
    vecs.push_back(s);
    vecsize.push_back(vecs[i].size());
    naveed.push_back(make_pair(vecsize[i],vecs[i]));
  }
 
  


  sort(naveed.begin(),naveed.end());
  if(naveed.size() == 1)
  {
    cout<<"YES"<<endl;
    for(int i = 0;i<n;i++)
    {
      cout<<naveed[i].second<<endl;
    }
  }
  else
  {
    bool flag = false;
  for(int i = 0;i<n-1;i++)
  {
    string s1 = naveed[i].second;
    string s2 = naveed[i+1].second;

    // cout<<s1<<" "<<s2<<endl;
    int res = isSubstring(s1,s2);
    if(res == -1)
    {
      flag = false;
      break;
    }
    else
    {
      flag = true;
      continue;
    }
    
  }
  // cout<<flag;
  if(flag)
  {
    cout<<"YES"<<endl;
    for(int i = 0;i<n;i++)
    {
      cout<<naveed[i].second<<endl;
    }
  }
  else

  {
    cout<<"NO"<<endl;
  }
  }
  



  




  return 0;
}