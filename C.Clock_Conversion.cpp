#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    string hour = s.substr(0,2);
    //string min = s.substr(3,2);
    int hi = 0;
    for (char c:hour) {
        // Checking if the element is number
        if (c >= '0' && c <= '9') {
            hi = hi * 10 + (c - '0');
        }
  }
  bool flag = false; // false mane AM
  if(hi == 0)
  {
    hi = 12;
    
  }
  else if(hi > 12)
  {
    hi = hi -12;
    flag = true;
  }
  else if(hi == 12)
  {
    flag = true;
  }

  string oh = to_string(hi);

  if(oh.size() == 1)
  {
    oh = "0" + oh;
  }
  
  if(flag == true)
  {
    cout<<oh<<":"<<s[3]<<s[4]<<" PM"<<endl;
  }
  else
  {
    cout<<oh<<":"<<s[3]<<s[4]<<" AM"<<endl;
  }
}

  return 0;
}