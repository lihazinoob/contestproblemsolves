#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) 
    {

        int n, m, x; 
        cin >> n >> m >> x;
        set <int>visited[2];
        int ix = 0;
        visited[ix].insert(x);
        while (m--) 
        {
            int r; 
            char ch; 
            cin >> r >> ch;
            while (!visited[ix].empty()) 
            {
                //getting the first element 
                int u = *(visited[ix].begin());
                visited[ix].erase(u);
                if (ch == '?' || ch == '0') {
                    visited[ix ^ 1].insert((u + r - 1) % n + 1);
                }
                if (ch == '?' || ch == '1') {
                    visited[ix ^ 1].insert((u - r - 1 + n) % n + 1);
                }
            }
            ix = ix ^ 1;
        }
        cout << visited[ix].size() << endl;
        for (auto& x : visited[ix]) 
        {
            cout << x<< " ";
        }
        cout << endl;
    }
    return 0;
}