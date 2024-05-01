#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto &i:v)
        cin>>i;
    while(k--)
    {
        int x;
        cin>>x;
        cout<<upper_bound(begin(v),end(v),x)-begin(v)<<endl;
    }
    return 0;
}