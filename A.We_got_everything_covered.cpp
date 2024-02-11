//Problem Link: https://codeforces.com/contest/1925/problem/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,k;
        cin >> n >> k;
        for(int i=0;i<n;i++)
            for(char c='a';c<'a'+k;c++)
                cout << c;
        cout << '\n';
    }
}